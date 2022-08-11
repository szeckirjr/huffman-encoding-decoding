#define ALPHABET_SIZE 97

#define C9 { .code=0x636da6, .len=23, .ascii=9, .string="\t" }
#define C10 { .code=0x31b6d2, .len=22, .ascii=10, .string="\n" }
#define C32 { .code=0x7, .len=3, .ascii=32, .string=" " }
#define C33 { .code=0x23f, .len=11, .ascii=33, .string="!" }
#define C34 { .code=0x31a, .len=10, .ascii=34, .string="\"" }
#define C35 { .code=0x31b6d1, .len=22, .ascii=35, .string="#" }
#define C36 { .code=0x636db, .len=19, .ascii=36, .string="$" }
#define C37 { .code=0x18db5, .len=17, .ascii=37, .string="%" }
#define C38 { .code=0x18db7, .len=17, .ascii=38, .string="&" }
#define C39 { .code=0x118, .len=10, .ascii=39, .string="'" }
#define C40 { .code=0x232, .len=11, .ascii=40, .string="(" }
#define C41 { .code=0x233, .len=11, .ascii=41, .string=")" }
#define C42 { .code=0x18da, .len=13, .ascii=42, .string="*" }
#define C43 { .code=0x31b6c, .len=18, .ascii=43, .string="+" }
#define C44 { .code=0x30, .len=6, .ascii=44, .string="," }
#define C45 { .code=0x18c, .len=9, .ascii=45, .string="-" }
#define C46 { .code=0x53, .len=7, .ascii=46, .string="." }
#define C47 { .code=0x31b68, .len=18, .ascii=47, .string="/" }
#define C48 { .code=0x236, .len=11, .ascii=48, .string="0" }
#define C49 { .code=0x21b, .len=10, .ascii=49, .string="1" }
#define C50 { .code=0x427, .len=11, .ascii=50, .string="2" }
#define C51 { .code=0xc6c, .len=12, .ascii=51, .string="3" }
#define C52 { .code=0xc44, .len=12, .ascii=52, .string="4" }
#define C53 { .code=0xc45, .len=12, .ascii=53, .string="5" }
#define C54 { .code=0x220, .len=11, .ascii=54, .string="6" }
#define C55 { .code=0x872, .len=12, .ascii=55, .string="7" }
#define C56 { .code=0x228, .len=11, .ascii=56, .string="8" }
#define C57 { .code=0x873, .len=12, .ascii=57, .string="9" }
#define C58 { .code=0x426, .len=11, .ascii=58, .string=":" }
#define C59 { .code=0x313, .len=10, .ascii=59, .string=";" }
#define C60 { .code=0x31b6d3d, .len=26, .ascii=60, .string="<" }
#define C61 { .code=0x636e, .len=15, .ascii=61, .string="=" }
#define C62 { .code=0x31b6d3e, .len=26, .ascii=62, .string=">" }
#define C63 { .code=0x438, .len=11, .ascii=63, .string="?" }
#define C64 { .code=0x31b6d3a, .len=26, .ascii=64, .string="@" }
#define C65 { .code=0x108, .len=9, .ascii=65, .string="A" }
#define C66 { .code=0x21e, .len=10, .ascii=66, .string="B" }
#define C67 { .code=0x21f, .len=10, .ascii=67, .string="C" }
#define C68 { .code=0x637, .len=11, .ascii=68, .string="D" }
#define C69 { .code=0x312, .len=10, .ascii=69, .string="E" }
#define C70 { .code=0x11c, .len=10, .ascii=70, .string="F" }
#define C71 { .code=0x425, .len=11, .ascii=71, .string="G" }
#define C72 { .code=0x89, .len=9, .ascii=72, .string="H" }
#define C73 { .code=0x85, .len=8, .ascii=73, .string="I" }
#define C74 { .code=0x229, .len=11, .ascii=74, .string="J" }
#define C75 { .code=0x47c, .len=12, .ascii=75, .string="K" }
#define C76 { .code=0x11a, .len=10, .ascii=76, .string="L" }
#define C77 { .code=0x31c, .len=10, .ascii=77, .string="M" }
#define C78 { .code=0x21a, .len=10, .ascii=78, .string="N" }
#define C79 { .code=0x115, .len=10, .ascii=79, .string="O" }
#define C80 { .code=0x11d, .len=10, .ascii=80, .string="P" }
#define C81 { .code=0x636c, .len=15, .ascii=81, .string="Q" }
#define C82 { .code=0x11e, .len=10, .ascii=82, .string="R" }
#define C83 { .code=0x8b, .len=9, .ascii=83, .string="S" }
#define C84 { .code=0x18f, .len=9, .ascii=84, .string="T" }
#define C85 { .code=0x47d, .len=12, .ascii=85, .string="U" }
#define C86 { .code=0x221, .len=11, .ascii=86, .string="V" }
#define C87 { .code=0x21d, .len=10, .ascii=87, .string="W" }
#define C88 { .code=0x848, .len=12, .ascii=88, .string="X" }
#define C89 { .code=0x237, .len=11, .ascii=89, .string="Y" }
#define C90 { .code=0x636f, .len=15, .ascii=90, .string="Z" }
#define C91 { .code=0x1093, .len=13, .ascii=91, .string="[" }
#define C92 { .code=0x31b6d3c, .len=26, .ascii=92, .string="\\" }
#define C93 { .code=0x1092, .len=13, .ascii=93, .string="]" }
#define C94 { .code=0x31b69, .len=18, .ascii=94, .string="^" }
#define C95 { .code=0x10c, .len=9, .ascii=95, .string="_" }
#define C96 { .code=0x31b6d0, .len=22, .ascii=96, .string="`" }
#define C97 { .code=0x9, .len=4, .ascii=97, .string="a" }
#define C98 { .code=0x10, .len=6, .ascii=98, .string="b" }
#define C99 { .code=0x34, .len=6, .ascii=99, .string="c" }
#define C100 { .code=0x11, .len=5, .ascii=100, .string="d" }
#define C101 { .code=0x1, .len=3, .ascii=101, .string="e" }
#define C102 { .code=0x33, .len=6, .ascii=102, .string="f" }
#define C103 { .code=0x28, .len=6, .ascii=103, .string="g" }
#define C104 { .code=0x1b, .len=5, .ascii=104, .string="h" }
#define C105 { .code=0x5, .len=4, .ascii=105, .string="i" }
#define C106 { .code=0x111, .len=10, .ascii=106, .string="j" }
#define C107 { .code=0xc5, .len=8, .ascii=107, .string="k" }
#define C108 { .code=0x15, .len=5, .ascii=108, .string="l" }
#define C109 { .code=0x32, .len=6, .ascii=109, .string="m" }
#define C110 { .code=0x6, .len=4, .ascii=110, .string="n" }
#define C111 { .code=0x7, .len=4, .ascii=111, .string="o" }
#define C112 { .code=0x12, .len=6, .ascii=112, .string="p" }
#define C113 { .code=0x310, .len=10, .ascii=113, .string="q" }
#define C114 { .code=0x0, .len=4, .ascii=114, .string="r" }
#define C115 { .code=0x1, .len=4, .ascii=115, .string="s" }
#define C116 { .code=0xb, .len=4, .ascii=116, .string="t" }
#define C117 { .code=0x35, .len=6, .ascii=117, .string="u" }
#define C118 { .code=0x52, .len=7, .ascii=118, .string="v" }
#define C119 { .code=0x20, .len=6, .ascii=119, .string="w" }
#define C120 { .code=0x31d, .len=10, .ascii=120, .string="x" }
#define C121 { .code=0x13, .len=6, .ascii=121, .string="y" }
#define C122 { .code=0x623, .len=11, .ascii=122, .string="z" }
#define C123 { .code=0x31b6d3f, .len=26, .ascii=123, .string="{" }
#define C124 { .code=0xc6db5, .len=20, .ascii=124, .string="|" }
#define C125 { .code=0x18db69c, .len=25, .ascii=125, .string="}" }
#define C126 { .code=0x31b6d3b, .len=26, .ascii=126, .string="~" }

typedef struct CharFreq
{
    char *character;
    int frequency;
} CharFreq_T;