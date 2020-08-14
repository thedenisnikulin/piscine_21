#include <stdio.h>

void ft_print_reverse_alphabet();

int main() {
    ft_print_reverse_alphabet();
    return 0;
}

void ft_print_reverse_alphabet() {
    char result[26];
    for(int i=97; i<123; i++) {
        result[122-i] = (char) i;
    }
    printf("%s", result);
}