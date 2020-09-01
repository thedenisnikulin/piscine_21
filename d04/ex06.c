int		ft_is_prime(int nb)
{
	int		checking_num;

	if (nb <= 1)
		return (0);

	checking_num = 2;
	while (checking_num < nb) 
	{
		if (nb % checking_num == 0)
			return (0);
	
		checking_num++;
	}
	return (1);
}

/*
void    ft_putchar(char c)							// реализация ft_putchar - функции печати символа
{
	write(1, &c, 1);  								// функция из unistd.h принимает три параметра:
													// 1 - запись в stdout
													// &c - адрес параметра c
													// 1 - количество байт которое нужно напечатать (1 byte == 1 char)
}

void	ft_putnbr(int nb)							// реализация ft_putnbr - функция печати числа
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
	int		from;
	int		until;

	from = 0;
	until = 20;
	while (from <= until)							// выводим числа от 0 до 20 и ответ являются ли они простыми 
	{												// (1 - да, 0 - нет) в формате <число: ответ>
		ft_putnbr(from);
		ft_putchar(':');
		ft_putchar(' ');
		ft_putchar(ft_is_prime(from) + '0');
		ft_putchar('\n');
		from++;
	}
	return (0);
}
*/