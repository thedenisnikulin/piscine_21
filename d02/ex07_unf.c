/*
Create a function that displays all dierent combinations of n numbers by ascending
order.
- n will be so that : 0 < n < 10.
- If n = 2, here’s the expected output :
01, 02, 03, ..., 09, 12, ..., 79, 89$>
*/

#include <io.h>

void ft_putchar(char c);
void ft_print_combn(int n);

int main() {
    ft_print_combn(3);
    return 0;
};

void ft_putchar(char c) {
    write(1, &c, 1);
};

void ft_print_combn(int n) {
    int nums[n];
    while (nums[0] <= 10-n) { // first digit of last combination is always 10-n
        
    }
}