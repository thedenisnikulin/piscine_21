/* UNFINISHED // НЕВЫПОЛНЕНО */
#include <unistd.h>

int		abs_num(int num);
int		are_positions_valid(int *pos, int row);
int		solve_cell(int row, int *q_positions);
int		ft_eight_queens_puzzle(void);
void    ft_putchar(char c);
void	ft_putnbr(int nb);


void putarr(int *arr, int len)
{
	int		i;

	i = 0;
	ft_putchar('[');
	while(i < len)
	{
		ft_putnbr(arr[i]);
		ft_putchar(',');
		ft_putchar(' ');
		i++;
	}
	ft_putchar(']');
	ft_putchar('\n');
}

int		abs_num(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	return (num);
}

int		are_positions_valid(int *pos, int row)			/* 0 если invalid, 1 если valid */
{
														/* pos - массив позиций */
														/* row - текущий ряд */
	int		ithRow;										/* i-тый ряд */

	ithRow = 0;
	while (ithRow < row)
	{
		if (pos[ithRow] == pos[row])									/* кейс: королевы стоят на одной колонне */
		{																/* неправильная позиция - атакуют прямо */
			return (0);
		}
		if (abs_num(ithRow - row) == abs_num(pos[ithRow] - pos[row]))	/* кейс: абсолютная дистанция колонн королев */
		{																/* равна абс. дистанции рядов */
			return (0);													/* неправильная позиция - атакуют диагонально */
		}
		ithRow++;
	}
	return (1);
}


/*	шахматная доска 4х4 */
/*		Q . . .			*/
/*		. . Q .			*/
/*		. . . .			*/
/*		Q . . .			*/

int		solve_cell(int row, int *q_positions)
{										/* q_positions - массив из 8 чисел, */
										/* 1 королева в 1 ряду (8 позиций, 8 королев) */
	int		colOfRow;					/* колонна ряда row */

	colOfRow = 0;
	while (row < 8) 					/* iter all rows */
	{
		if (row == 7)					/* базовый случай - случается когда мы на последней колонне */
			return (1);					/* выходим из цикла к строке return (row); */
		else							/* рекурсивный случай */
		{
			while (colOfRow < 8)
			{
				q_positions[row] = colOfRow;
				//putarr(q_positions, 8);
				if (are_positions_valid(q_positions, row))
				{
					putarr(q_positions, 8);
					solve_cell(row + 1, q_positions);
				}
				q_positions[row] = 0;
				colOfRow++;
			}
		}
		row++;
	}
	return (q_positions[7]);
}

int		ft_eight_queens_puzzle(void)
{
	int		firstRowCol;				/* колонна первого ряда */
	int		possibilites;
	int		q_positions[8];

	firstRowCol = 0;
	possibilites = 0;
	q_positions[1] = 0;
	q_positions[2] = 0;
	q_positions[3] = 0;
	q_positions[4] = 0;
	q_positions[5] = 0;
	q_positions[6] = 0;
	q_positions[7] = 0;
	while (firstRowCol < 8)
	{
		q_positions[0] = firstRowCol;
		if (solve_cell(1, q_positions) >= 0) // ???
			possibilites++;
		firstRowCol++;
	}
	return (possibilites);
}


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
	ft_putnbr(ft_eight_queens_puzzle());
	return (0);
}