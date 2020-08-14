#include <stdio.h>

void ft_print_alphabet();

int main() {
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet() {
    char result[26];
    for(int i=97; i<123; i++) {
        result[i-97] = (char) i;
    }
    printf("%s", result);
}