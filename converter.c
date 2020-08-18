#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "converter.h"


unsigned long rebase(const char * number, const char * base) {
    if (strcmp("-b", base) == 0 || strcmp("--binary", base) == 0) {
        return strtoul(number, NULL, 2);
    }

    if (strcmp("-o", base) == 0 || strcmp("--octal", base) == 0) {
        return strtoul(number, NULL, 8);
    }

    if (strcmp("-d", base) == 0 || strcmp("--decimal", base) == 0) {
        return strtoul(number, NULL, 10);
    }

    if (strcmp("-x", base) == 0 || strcmp("--hexadecimal", base) == 0) {
        return strtoul(number, NULL, 16);
    }
}


void convert_to_ascii(unsigned long number) {
    if (number >= 32 && number <= 126) {
        printf("ASCII       : '%c' \n", number);
    }
}


void print_binary(unsigned long number) {
    if (number >> 1) {
        print_binary(number >> 1);
    }
    printf("%c", (number & 1) ? '1' : '0');
}


void convert_to_binary(unsigned long number) {
    printf("Binary      : ");
    print_binary(number);
    printf("\n");
}


void convert_to_octal(unsigned long number) {
    printf("Octal       : %lo \n", number);
}


void convert_to_decimal(unsigned long number) {
    printf("Decimal     : %lu \n", number);
}


void convert_to_hexadecimal(unsigned long number) {
    printf("Hexadecimal : 0x%lx \n", number);
}


void convert_to_hexadecimal_u(unsigned long number) {
    printf("Hexadecimal : 0x%lX \n", number);
}
