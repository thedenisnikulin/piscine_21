void ft_putchar(char c);
void ft_putstr(char *str);

void ft_putstr(char *str)
{
    int i;  /* объявляем счетчик */

    i = 0;  /* инициализируем счетчик */
    while (str[i] != '\0')  /* последним символом любой строки (= массива символов) является '\0'*/
    {
        ft_putchar(str[i]);
        i++;
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
*    // создаем массив со значениями типа char (выглядит как {'a', 'b', 'c', '\0'})    
*    char str[] = "Hello, world!";
*    ft_putstr(str);
*    return (0);
* }
*/