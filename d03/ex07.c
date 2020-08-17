char *ft_strrev(char *str)
{
    int i;  /* счетчик для итерации по символам строки */
    int len;  /* хранит длину строки */
    char temp;  /* хранит промежуточный символ */

    i = 0;
    temp = 0;
    len = 0;
    while (str[len] != '\0')  /* считаем длину строки */
    {
        len++;
    }
    i = len - 1;  /* индекс последнего символа строки */
    while (i > (len / 2))  /* переставляем символы */
    {
        temp = str[i]; /* temp = последний_символ */
        str[i] = str[len - (i+1)];  /* последний_символ = первый_символ */
        str[len - (i+1)] = temp;  /* первый_символ = temp (в котором последний символ) */
        i--;
    }
    return (str);
}

/* тест
 * #include <unistd.h>
 * 
 * void ft_putchar(char c);
 * void ft_putstr(char *str);
 * char *ft_strrev(char *str);
 * 
 * int main(void)
 * {
 *     char str[] = "Hello, world!";
 *     ft_putstr(ft_strrev(str));
 *     return (0);
 * }
 * 
 * void ft_putchar(char c)
 * {
 *     write(1, &c, 1);
 * }
 * 
 * void ft_putstr(char *str)
 * {
 *     int i;  // объявляем счетчик
 * 
 *     i = 0;  // инициализируем счетчик
 *     while (str[i] != '\0')  // последним символом любой строки (= массива символов) является '\0'
 *     {
 *         ft_putchar(str[i]);
 *         i++;
 *     }
 * } 
*/