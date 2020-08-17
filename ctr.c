#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>


void help() {
    printf("Usage: \n");
    printf("    ctr [-b | -o | -d | -x] [number] [options] \n\n");

    printf("Options: \n");
    printf("    -b, --binary        Input a binary number \n");
    printf("    -o, --octal         Input a octal number \n");
    printf("    -d, --decimal       Input a decimal number \n");
    printf("    -x, --hexadecimal   Input a hexadecimal number \n");
    printf("    -a, --ascii         Print matched ASCII character \n");
    printf("    -u, --uppercase     Use uppercase character in hexadecimal \n");
    printf("    -h, --help          Display this help and exit \n\n");

    printf("Examples: \n");
    printf("    $ ctr -x 2f \n");
    printf("    Binary      : 101111 \n");
    printf("    Octal       : 57 \n");
    printf("    Decimal     : 47 \n");
    printf("    Hexadecimal : 0x2f \n\n");

    printf("    $ ctr -b 1011001 -a \n");
    printf("    ASCII       : 'Y' \n");
    printf("    Binary      : 1011001 \n");
    printf("    Octal       : 131 \n");
    printf("    Decimal     : 89 \n");
    printf("    Hexadecimal : 0x59 \n\n");

    printf("The maximum input number is %lu in decimal .\n", ULONG_MAX);
}


int main(int argc, char const * argv[]) {
    bool ascii = false;
    bool uppercase = false;
    char * base = NULL;
    char * number = NULL;

    for (size_t i = 1; i < argc; i++) {
        if (strcmp("-h", argv[i]) == 0 || strcmp("--help", argv[i]) == 0) {
            help();
            exit(0);
        }
        else if (strcmp("-a", argv[i]) == 0 || strcmp("--ascii", argv[i]) == 0) {
            ascii = true;
        }
        else if (strcmp("-u", argv[i]) == 0 || strcmp("--uppercase", argv[i]) == 0) {
            uppercase = true;
        }
        else if (strcmp("-b", argv[i]) == 0 || strcmp("--binary",      argv[i]) == 0 ||
                 strcmp("-o", argv[i]) == 0 || strcmp("--octal",       argv[i]) == 0 ||
                 strcmp("-d", argv[i]) == 0 || strcmp("--decimal",     argv[i]) == 0 ||
                 strcmp("-h", argv[i]) == 0 || strcmp("--hexadecimal", argv[i]) == 0) {
            base = argv[i];
            if (i + 1 < argc) {
                number = argv[i + 1];
            }
        }
    }

    if (number == NULL) {
        help();
    }


    return 0;
}
