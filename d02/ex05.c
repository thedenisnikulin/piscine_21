void	ft_putchar(char c);							/* объявляю функцию вывода в stdout */

void	ft_print_comb2(void) 
{
	int		i;
	int		j;

	i = 0;
	while (i < 100) 
	{
		j = i + 1;
		while(j < 100) 
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(j / 10 + '0');
			ft_putchar(j % 10 + '0');
			if ((i / 10 != 9) || (i % 10 != 8))		/* вывести запятую и пробел, если комбинация не является последней */
			{										/* последняя комбинация - 98 */
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
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
	ft_print_comb2();
	return (0);
}
*/
