int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i <= (int) n)	/* пока мы не дошли до конца s1, */
		i++;										/* i-тые символы s1 и s2 равны, и i <= n */
	return ((int) s1[i] - s2[i]);					/* возвращаем разницу и приводим ее к типу int */
}

/*
void    ft_putchar(char c)							// реализация ft_putchar - функции печати символа
{
	write(1, &c, 1);  								// функция из unistd.h принимает три параметра:
													// 1 - запись в stdout
													// &c - адрес параметра c
													// 1 - количество байт которое нужно напечатать (1 byte == 1 char)
}

void	ft_putstr(char *str)						// т.к. строка в Си - массив символов,
{													// а массив в Си - указатель на первый его элемент,
	while (*str != '\0')							// то мы итерируем через все адреса с помощью
	{												// адресной арифметики, добавляя 1 к адресу элемента
		ft_putchar(*str);							// разыменовываем адрес и получаем элемент
		str++;										// при этом выводя в стандартный поток вывода каждый символ
	}
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
	char str1[] = "lmao";
	char str2[] = "rofl";
	ft_putstr("strcmp: ");
	ft_putnbr(strncmp(str1, str2, 3));				// сраниваю функцию strncmp из заголовочного
	ft_putchar('\n');								// файла string.h с моей функцией ft_strncmp
	ft_putstr("ft_strcmp: ");
	ft_putnbr(ft_strncmp(str1, str2, 3));
	ft_putchar('\n');
	return (0);
}
*/