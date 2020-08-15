#include <io.h>

void ft_putchar(char c);
void ft_putnbr(int nb);
int log10(int n);

int main() {
    ft_putnbr(234);
    return 0;
}

void ft_putchar(char c) {
    write(1, &c, 1);
}

int log10(int n) {
    return ; // 16 = 4^x    x=?
};

void ft_putnbr(int nb) {
    const int num_len = log10(nb) + 1;
    char c[num_len];
    int i = 0;
    while (i < num_len) {
        c[num_len-i-1] = nb % 10 + '0'; // get last digit & convert to char
        nb /= 10; // remove last digit
        i++;
    };
    // unreverse array of chars and print
    for (int i=0; i<num_len; i++) {
        ft_putchar(c[i]);
    }
}