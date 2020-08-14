#include <stdio.h>

void ft_is_negative(int n);

int main() {
    ft_is_negative(-2);
    return 0;
}

void ft_is_negative(int n) {
    if (n >= 0) {
        printf("P"); 
    } else {
        printf("N");
    }
}