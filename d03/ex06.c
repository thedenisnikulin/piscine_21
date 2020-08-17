int ft_strlen(char *str);

int ft_strlen(char *str)
{
    int i;  /* инициализируем счетчик */

    i = 0;
    while (str[i] != '\0')  /* пока счетчик не равен символу, на котором оканчивается строка ('\0', или null character) */
    {
        i++;
    }
    return (i);
}

/* функция ft_putchar для теста (числа больше меньше 0 и больше 9 не будут выводиться этой функцией!)
* void ft_putchar(char c) 
* {
*    // 1 - запись в stdout
*    // &c - адрес параметра c
*    // 1 - количество байт которое нужно записать (1 byte == 1 char)
*    write(1, &c, 1);  // функция из unistd.h
* }
*/

/** тест
 * int main(void)
 * {
 *    char str[] = "Hello";
 *    int len = ft_strlen(str);
 *    ft_putchar(len+48);
 *    return(0);
 * }
*/