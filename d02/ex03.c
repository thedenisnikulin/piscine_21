void ft_putchar(char c); /* объявляю функцию вывода в stdout */

void ft_is_negative(int n) {
    if (n >= 0) {
        ft_putchar('P'); 
    } else {
       ft_putchar('N');
    }
}