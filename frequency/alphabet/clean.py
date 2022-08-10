from os import listdir
import itertools

# English alphabet
alphabet_lower = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
alphabet_upper = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
alphabet_symbols = [' ', '\n', ',', '.', '!', '?', ';', ':', '"', '\'', '`', '-', '_', '=', '+', '*', '%', '#', '$', '@', '&', '^', '~', '|', '\\', '<', '>', '/', '{', '}', '[', ']', '(', ')']
alphabet_numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
full_alphabet = list(itertools.chain(alphabet_lower, alphabet_upper, alphabet_symbols, alphabet_numbers))
print(full_alphabet, len(full_alphabet))

# Function to clean books of any characters not in the expected alphabet
def main():
    print(listdir("../books/raw/"))
    notFound = []
    for file in sorted(listdir("../books/raw/")):
        inf = open("../books/raw/" + file, "r", encoding='latin-1')
        outf = open("../books/clean/" + file, "w+", encoding='latin-1')
        count = 0
        char = 0
        for line in inf:
            for c in line:
                if c in full_alphabet:
                    char += 1
                    outf.write(c)
                else:
                    # print(c)
                    if ord(c) not in notFound:
                        notFound.append(ord(c))
                    count += 1
                        
        inf.close()
        outf.close()
        print(file + ": " + str(count) + ' '+str(char))
    notFound.sort()
    print(notFound)


if __name__=='__main__':
    main()