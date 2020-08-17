void ft_putchar(char c); /* объявляю функцию вывода в stdout */

void ft_print_reverse_alphabet(void) 
{
    /* делаю то же самое, только начиная с кода символа последней буквы алфавита,
    * уменьшая значение переменной letter на 1
    */
    int letter;
    
    letter = 122;
    while (letter >= 97) 
    {
        ft_putchar((char) letter);
        letter--;
    }
}

/* реализация ft_putchar
* void ft_putchar(char c) 
* {
*    // 1 - запись в stdout
*    // &c - адрес параметра c
*    // 1 - количество байт которое нужно записать (1 byte == 1 char)
*    write(1, &c, 1);  // функция из unistd.h
* }
*/

/* тест
* int main(void) 
* {
*    ft_print_reverse_alphabet();
*    return (0);
* }
*/
