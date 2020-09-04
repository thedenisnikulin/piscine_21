char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while (i < (int) n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[++i] = '\0';
	return (dest);
}

/*
void    ft_putchar(char c)		// реализация ft_putchar - функции печати символа
{
	write(1, &c, 1);  			// функция из unistd.h принимает три параметра:
								// 1 - запись в stdout
								// &c - адрес параметра c
								// 1 - количество байт которое нужно напечатать (1 byte == 1 char)
}

void	ft_putstr(char *str)	// т.к. строка в Си - массив символов,
{								// а массив в Си - указатель на первый его элемент,
	while (*str != '\0')		// то мы итерируем через все адреса с помощью
	{							// адресной арифметики, добавляя 1 к адресу элемента
		ft_putchar(*str);		// разыменовываем адрес и получаем элемент
		str++;					// при этом выводя в стандартный поток вывода каждый символ
	}
}

int		main(void)
{
	char dest[] = "dest";
	char src[] = "src";
	ft_putstr("Before: ");
	ft_putstr(dest);
	ft_putstr("\n");
	ft_strncpy(dest, src, 3);
	ft_putstr("After: ");
	ft_putstr(dest);
	ft_putstr("\n");
	return (0);
}
*/
