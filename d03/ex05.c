void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int		i;					/* объявляем счетчик */

	i = 0;						/* инициализируем счетчик */
	while (str[i] != '\0') 		/* последним символом любой строки (= массива символов) является '\0'*/
	{
		ft_putchar(str[i]);
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
int		main(void) 
{
	char str[] = "Hello, world!";	// создаем массив со значениями типа char (выглядит как {'a', 'b', 'c', '\0'})
	
	ft_putstr(str);
	return (0);
}
*/