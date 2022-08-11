codeDict = {
    "a": "1001",
    "b": "010000",
    "c": "110100",
    "d": "10001",
    "e": "001",
    "f": "110011",
    "g": "101000",
    "h": "11011",
    "i": "0101",
    "j": "0100010001",
    "k": "11000101",
    "l": "10101",
    "m": "110010",
    "n": "0110",
    "o": "0111",
    "p": "010010",
    "q": "1100010000",
    "r": "0000",
    "s": "0001",
    "t": "1011",
    "u": "110101",
    "v": "1010010",
    "w": "100000",
    "x": "1100011101",
    "y": "010011",
    "z": "11000100011",
    "A": "100001000",
    "B": "1000011110",
    "C": "1000011111",
    "D": "11000110111",
    "E": "1100010010",
    "F": "0100011100",
    "G": "10000100101",
    "H": "010001001",
    "I": "10000101",
    "J": "01000101001",
    "K": "010001111100",
    "L": "0100011010",
    "M": "1100011100",
    "N": "1000011010",
    "O": "0100010101",
    "P": "0100011101",
    "Q": "110001101101100",
    "R": "0100011110",
    "S": "010001011",
    "T": "110001111",
    "U": "010001111101",
    "V": "01000100001",
    "W": "1000011101",
    "X": "100001001000",
    "Y": "01000110111",
    " ": "111",
    "Z": "110001101101111",
    "\n": "1100011011011011010010",
    "\t": "11000110110110110100110",
    ",": "110000",
    ".": "1010011",
    "!": "01000111111",
    "?": "10000111000",
    ";": "1100010011",
    ":": "10000100110",
    "\\": "11000110110110110100111100",
    "'": "0100011000",
    "`": "1100011011011011010000",
    "-": "110001100",
    "_": "100001100",
    "=": "110001101101110",
    "+": "110001101101101100",
    "*": "1100011011010",
    "%": "11000110110110101",
    "#": "1100011011011011010001",
    "$": "1100011011011011011",
    "@": "11000110110110110100111010",
    "&": "11000110110110111",
    "^": "110001101101101001",
    "~": "11000110110110110100111011",
    "|": "11000110110110110101",
    "<": "11000110110110110100111101",
    ">": "11000110110110110100111110",
    "/": "110001101101101000",
    "{": "11000110110110110100111111",
    "}": "1100011011011011010011100",
    "[": "1000010010011",
    "]": "1000010010010",
    "(": "01000110010",
    ")": "01000110011",
    "0": "01000110110",
    "1": "1000011011",
    "2": "10000100111",
    "3": "110001101100",
    "4": "110001000100",
    "5": "110001000101",
    "6": "01000100000",
    "7": "100001110010",
    "8": "01000101000",
    "9": "100001110011",
}

treeCodes = ['T']*119237951
print(len(treeCodes))

with open('huffmanTreeValues.txt', 'w') as f:
    for key in codeDict:
        #print(key)
        i = 0
        for element in codeDict[key]:
            if (element == '1'):
                i = 2*i + 2
            if (element == '0'):
                i = 2*i + 1
        f.write("[{}] = '{}',\n".format(i, key))
f.close()