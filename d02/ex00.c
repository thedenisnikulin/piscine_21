void	ft_putchar(char c);			/* объявляю функцию вывода символа в stdout, */
									/* т.е. в стандартный поток вывода */

void	ft_print_alphabet(void) 
{
	int		letter;					/* объявляю переменную целого числа */

	letter = 97;    				/* значение соответствует коду первой буквы англ. алфавита в формате ASCII */
	while (letter < 123)  			/* итерирую до кода символа последней буквы алфавита */
	{																
		ft_putchar((char) letter);	/* вывожу в stdout */	
		letter++;
	}
}

/* 									реализация ft_putchar - функции печати символа
void	ft_putchar(char c) 
{
	write(1, &c, 1);  				// функция из unistd.h принимает три параметра:
									// 1 - запись в stdout
									// &c - адрес параметра c
									// 1 - количество байт которое нужно напечатать (1 byte == 1 char)
}

									тест
int		main(void) 
{
	ft_print_alphabet();
	return (0);
}
*/
