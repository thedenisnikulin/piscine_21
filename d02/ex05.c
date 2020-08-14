#include <stdio.h>
#include <io.h>

void ft_putchar(char c);
void ft_print_comb2();

int main() {
    ft_print_comb2();
    return 0;
};

void ft_putchar(char c) {
    write(1, &c, 1);
};

void ft_print_comb2() {
    for (int i=0; i<100; i++) {
        for (int j=i+1; j<100; j++) {
            ft_putchar(i/10 + '0');
            ft_putchar(i%10 + '0');
            ft_putchar(' ');
            ft_putchar(j/10 + '0');
            ft_putchar(j%10 + '0');
            ft_putchar(',');
            ft_putchar(' ');
        };
        printf("\n");
    };
};