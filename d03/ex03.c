/*
This function divides parameters a by b and stores the result in the int pointed by
div. It also stores the remainder of the division of a by b in the int pointed by mod.
*/

#include <stdlib.h>

void ft_div_mod(int a, int b, int* div, int* mod);

int main() {
    int a = 5;
    int b = 10;
    int* div = (int*)malloc(sizeof(int*)); // allocate memory for pointers
    int* mod = (int*)malloc(sizeof(int*));
    ft_div_mod(a, b, div, mod);
    free(div);
    free(mod);
    return 0;
}

void ft_div_mod(int a, int b, int* div, int* mod) {
    *div = a/b;
    *mod = a%b;
}