#include <ctype.h>

double lex_atof(char *str) {
    double value = 0, decimal = 1;
    unsigned char negative = 0, dec = 0;

    if (*str == '+' && *str++);
    if (*str == '-' && *str++) negative = 1;

    while (*str) {
        if (isdigit(*str)) {
            value = (value * 10) + (*str - '0');
            if (dec) decimal *= 10;
        } 
        else if (*str == '.')
            dec = 1;
        str++;
    }

    return (negative) ? -(value / decimal) : (value / decimal);
}
