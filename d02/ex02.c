void ft_putchar(char c); /* объявляю функцию вывода символа в stdout */

void ft_print_numbers() {
    int count = 0;
    while (count < 10) {
        /* код '0' в ASCII - 48, добавляя count к 48 (где count < 10),
        * мы получаем код символа, соответствующий count. 
        * Таким образом мы переводим int в char */
        ft_putchar(count + '0');
        count++;
    }
}