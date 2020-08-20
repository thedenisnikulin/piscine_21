void	ft_sort_integer_table(int *tab, int size)
{
									/* имплементация алгоритма selection sort (сортировка выбором) */
	int		i;  					/* счетчик внешнего цикла */
	int		j;  					/* счетчик внутреннего цикла */
	int		temp;					/* хранит промежуточные значнеия */

	temp = 0;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
									/* каждый i-тый элемент сравниваем со всеми элементами, */
									/* стоящими после него. Самый маленький среди них меняем местами с i-тым элементом */
			if (tab[j] < tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
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

int		main(void) 
{
	int		arr[4];
	int		i;

	arr[0] = 9;
	arr[1] = 2;
	arr[2] = 6;
	arr[3] = 1;
	ft_sort_integer_table(arr, 4);

	i = 0;
	while (i < 4)
	{
		ft_putchar(arr[i] + '0');
		ft_putchar('\n');
		i++;
	}
}
*/