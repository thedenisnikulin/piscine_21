void    ft_putchar(char c);            /* объявляю функцию вывода в stdout */

void    ft_is_negative(int n) 
{
    if (n >= 0) 
    {
        ft_putchar('P'); 
    } else 
    {
       ft_putchar('N');
    }
}

/* 									реализация ft_putchar - функции печати символа
void    ft_putchar(char c) 
{
	write(1, &c, 1);  				// функция из unistd.h принимает три параметра:
									// 1 - запись в stdout
									// &c - адрес параметра c
									// 1 - количество байт которое нужно напечатать (1 byte == 1 char)
}

									тест
int     main(void) 
{
	ft_is_negative(-1);
	return (0);
}
*/
