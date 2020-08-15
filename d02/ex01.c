void ft_putchar(char c); /* объявляю функцию вывода в stdout */

void ft_print_reverse_alphabet() {
    /* делаю то же самое, только начиная с кода символа последней буквы алфавита,
    * уменьшая значение переменной letter на 1
    */
    int letter = 122;
    while (letter >= 97) {
        ft_putchar((char) letter);
        letter--;
    };
}