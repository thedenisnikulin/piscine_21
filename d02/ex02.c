void ft_putchar(char c); /* объявляю функцию вывода символа в stdout */

void ft_print_numbers(void) 
{
    int num;
    
    num = 48;
    while (num < 58) 
    {
        /* итерация через коды ASCII символов, начиная с 48 ('0') и заканчивая 57 ('9') */
        ft_putchar(num);
        num++;
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
* int main() 
* {
*    ft_print_numbers(void);
*    return (0);
* }
*/
