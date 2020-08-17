#include <stdio.h>
#include <limits.h>


void help() {
    printf("Usage: \n");
    printf("    ctr [option] [number] \n\n");

    printf("Options: \n");
    printf("    -b, --binary        Input a binary number \n");
    printf("    -o, --octal         Input a octal number \n");
    printf("    -d, --decimal       Input a decimal number \n");
    printf("    -x, --hexadecimal   Input a hexadecimal number \n");
    printf("    -a, --ascii         Print matched ASCII character \n");
    printf("    -h, --help          Display this help and exit \n\n");

    printf("Examples: \n");
    printf("    $ ctr -x 2F \n");
    printf("    Binary      : 101111 \n");
    printf("    Octal       : 57 \n");
    printf("    Decimal     : 47 \n");
    printf("    Hexadecimal : 2F \n\n");

    printf("    $ ctr -b 1011001 -a \n");
    printf("    ASCII       : 'Y' \n");
    printf("    Binary      : 1011001 \n");
    printf("    Octal       : 131 \n");
    printf("    Decimal     : 89 \n");
    printf("    Hexadecimal : 59 \n\n");

    printf("The maximum input number is %lu in decimal .\n", ULONG_MAX);
}


int main(int argc, char const * argv[]) {
    help();
    return 0;
}
