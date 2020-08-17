void ft_putchar(char c); /* объявляю функцию вывода в stdout */

void ft_is_negative(int n) 
{
    if (n >= 0) 
    {
        ft_putchar('P'); 
    } else 
    {
       ft_putchar('N');
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
*    ft_is_negative();
*    return (0);
* }
*/
