"""
Get the frequency for each character from the available portuguese books

For input options and help, type the following into a command prompt:
        python frequency.py --help
"""

import argparse
import collections
import itertools
from os import listdir
from sys import argv
import sys
from typing import Counter
import pandas as pd

# Brazilian portuguese alphabet
alphabet_lower = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
alphabet_upper = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
alphabet_symbols = [' ', '\n', ',', '.', '!', '?', ';', ':', '"', '\'', '`', '-', '_', '=', '+', '*', '%', '#', '$', '@', '&', '^', '~', '|', '\\', '<', '>', '/', '{', '}', '[', ']', '(', ')']
alphabet_numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
full_alphabet = list(itertools.chain(alphabet_lower, alphabet_upper, alphabet_symbols, alphabet_numbers))

"""CharFreq* alphabetFreq = {
    {
        character: 'a',
        frequency: 0,
    }
}"""

struct_outer = "CharFreq_T* alphabetFreq = {{ {} }}"
struct_inner = "{{\"{}\", {}, }}"


def write_to_header_file(data, output):
    #open text file
    frequency_file = open(output, "w")

    inner = ""

    #write string to file
    for index, row in data.iterrows():
        inner = inner + struct_inner.format(row['character'], row['frequency']) + ",\n"
    
    frequency_file.write(struct_outer.format(inner))
    

    #close file
    frequency_file.close()


def main(input, output):
    count = Counter([])
    df = pd.DataFrame(full_alphabet, columns=["character"])

    for file in sorted(listdir(input)):
        inf = open(input + file, "r", encoding='latin-1')
        count = collections.Counter(inf.read()) + count
        inf.close()
    
    
    df_count = pd.DataFrame.from_dict(count, orient='index').reset_index()
    df_count.rename(columns={'index': "character", 0: "count"}, inplace=True)
    df = df.merge(df_count, how='outer') # merge with full alphabet
    df['count'] = df['count'].fillna(0)
    df['total'] = df['count'].sum()
    df['frequency'] = df['count']
    df['frequency'] = df['frequency'].apply(lambda x: '%.10f' % x)

    write_to_header_file(df, output)  



def parse_args(args):
    parser = argparse.ArgumentParser()
    parser.add_argument("input", help="The path to the folder of files to analyze")
    parser.add_argument("-o", "--output-path", help="The frequency output file", default="../output.h")
    p_args = parser.parse_args(args)
    return p_args


if __name__ == "__main__":
    args = parse_args(sys.argv[1:])
    main(args.input, args.output_path)