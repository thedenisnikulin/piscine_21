int		ft_iterative_power(int nb, int power) 
{
	int		n;

	if (power < 0) 
		return (0);

	n = nb;  						/* сохраняем число, чтобы потом результат умножать на него */
	power--;						/* убавляем одну степень, т.к. число изначально равняется num^1 */
	while (power > 0) 
	{
		nb = n * nb;
		power--;
	}
	return (nb);
}

/* 									реализация ft_putchar - функции печати символа
void    ft_putchar(char c) 
{
	write(1, &c, 1);  				// функция из unistd.h принимает три параметра:
									// 1 - запись в stdout
									// &c - адрес параметра c
									// 1 - количество байт которое нужно напечатать (1 byte == 1 char)
}

int		main(void)
{
	int		num;
	int		p;

	num = 3;
	p = 2;
	ft_putchar(ft_iterative_power(num, p) + '0');  // expected output: 9
	return (0);
}
*/