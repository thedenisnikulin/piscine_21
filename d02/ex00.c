/* объявляю функцию вывода символа в stdout, 
т.е. в стандартный поток вывода */
void ft_putchar(char c);  

void ft_print_alphabet(void) 
{
    /* объявляю переменную целого числа */
    
    int letter;

    letter = 97;    /* значение соответствует коду первой буквы англ. алфавита в формате ASCII */
    while (letter < 123) 
    {
        /* итерирую до кода символа последней буквы алфавита
        * и вывожу в стандартный поток вывода
        */
        ft_putchar((char) letter);
        letter++;
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
*    ft_print_alphabet();
*    return (0);
* }
*/
