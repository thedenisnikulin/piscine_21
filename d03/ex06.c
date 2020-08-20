int		ft_strlen(char *str);

int		ft_strlen(char *str)
{
	int		i;  			/* инициализируем счетчик */

	i = 0;
	while (str[i] != '\0') 	/* пока счетчик не равен символу, на котором оканчивается строка ('\0', или null character) */
	{
		i++;
	}
	return (i);
}

/* 										реализация ft_putchar - функции печати символа
void    ft_putchar(char c) 
{
	write(1, &c, 1);  					// функция из unistd.h принимает три параметра:
										// 1 - запись в stdout
										// &c - адрес параметра c
										// 1 - количество байт которое нужно напечатать (1 byte == 1 char)
}

										тест
int		main(void) 
{
	char	str[] = "Hello, world!";	// создаем массив со значениями типа char (выглядит как {'a', 'b', 'c', '\0'})
	int		len;
	
	len = ft_strlen(str);
	ft_putchar(len + 48);
	return(0);
}
*/