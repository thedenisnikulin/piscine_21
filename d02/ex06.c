void ft_putchar(char c);
void ft_putnbr(int nb);

void ft_putnbr(int nb) 
{
    int nbcp;
    int size;

    size = 1;   /* инициализируем size (размер) с числом 1 (понадобится для умножения на 10) */
    if (nb < 0)   /* проверяем nb на отрицательность */
    {
        /* если отрицательное, выводим минус и делаем число положительным */
        ft_putchar('-');
        nb = -nb;
    }
    nbcp = nb;  /* сохраняем копию nb */
    while(nbcp >= 10)  /* пополняем size */
    {
        /* количество цифр в size в итоге будет равно количеству цифр в nb */
        nbcp /= 10;
        size *= 10;
    }
    nbcp = nb;  /* восстанавливаем nbcp */
    while (size > 0)
    {
        ft_putchar((char) (nbcp / size) + '0'); /* выводим в stdout первую цифру числа, деля число на size */
        nbcp %= size;  /* заносим в nbcp остаток от (nb / size), то есть все число кроме первой его цифры */
        size /= 10;  /* делим size на 10, уменьшая "количество цифр" */
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
*    ft_putnbr(123);
*    return (0);
* }
*/
