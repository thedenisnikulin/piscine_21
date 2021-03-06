int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else 
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));	
}

/*
void    ft_putchar(char c)							реализация ft_putchar - функции печати символа
{
	write(1, &c, 1);  								// функция из unistd.h принимает три параметра:
													// 1 - запись в stdout
													// &c - адрес параметра c
													// 1 - количество байт которое нужно напечатать (1 byte == 1 char)
}

void	ft_putnbr(int nb)							реализация ft_putnbr - функция печати числа
{
	int		nbcp;									// number copy - копия числа
	int		len;									// длина числа

	len = 1;   										// инициализируем len (размер) с числом 1 (понадобится для умножения на 10)
	if (nb < 0)   									// проверяем nb на отрицательность
	{
													// если отрицательное, выводим минус и делаем число положительным
		ft_putchar('-');
		nb = -nb;
	}
	nbcp = nb;										// сохраняем копию nb
	while(nbcp >= 10)								// пополняем len
	{
													// количество цифр в len в итоге будет равно количеству цифр в nb
		nbcp /= 10;
		len *= 10;
	}
	nbcp = nb;										// восстанавливаем nbcp
	while (len > 0)
	{
		ft_putchar((char) (nbcp / len) + '0');		// выводим в stdout первую цифру числа, деля число на len
		nbcp %= len;								// заносим в nbcp остаток от (nb / len), то есть все число кроме первой его цифры
		len /= 10;									// делим len на 10, уменьшая "количество цифр"
	}
}


int		main(void)
{
	int		n;

	n = 7;
	ft_putnbr(ft_fibonacci(n));						// expected: 13
	return (0);
}
*/