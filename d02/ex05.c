void ft_putchar(char c); /* объявляю функцию вывода в stdout */

void ft_print_comb2() {
    int i;
    int j;

    i = 0;
    while (i < 100) {
        j = i + 1;
        while(j < 100) {
            ft_putchar(i / 10 + '0');
            ft_putchar(i % 10 + '0');
            ft_putchar(' ');
            ft_putchar(j / 10 + '0');
            ft_putchar(j % 10 + '0');
            if ((i / 10 != 9) || (i % 10 != 8)) {
                ft_putchar(',');
                ft_putchar(' ');
            }
            j++;
        };
        i++;
    };
};