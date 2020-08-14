#include <stdio.h>

void ft_print_numbers();

int main() {
    ft_print_numbers();
    return 0;
}

void ft_print_numbers() {
    for (int i=0; i<10; i++) {
        printf("%d", i);
    }
}