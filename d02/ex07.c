/* UNFINISHED // НЕВЫПОЛНЕНО */

#include <unistd.h>

void ft_putchar(char c);
void ft_print_items(int nums[], int len);
void ft_print_combn(int n);

int main(void) 
{
	ft_print_combn1(2);
	return (0);
};

void ft_putchar(char c) 
{
	write(1, &c, 1);
};

void ft_print_items(int nums[], int nums_len)
{
	int i;

	i = 0;
	while (i < nums_len)
	{
		ft_putchar(nums[i] + '0');
		i++;
	}
}

void ft_print_combn(int n) 
{
	int nums[n];
	int i;  /* счетчик. Используется сразу для двух циклов. */
	int curr;  /* текущий элемент (current) */


	i = 0;
	/* инициализируем массив nums с начальными значениями.
	* для массива длинной 3 значения будут выглядеть так: {0, 1, 2} */
	while (i < n)
	{
		nums[i] = i;
		i++;
	}
	i = 0;
	/* подбираем и выводим комбинации */
	while (nums[0] <= 10-n)  /* пока все комбинации не подобраны */
	{
		curr = n-1;  /* начнем с конца массива */
		while(nums[curr] < 9)
		{
			nums[curr] += 1;
			ft_print_items(nums, n);
			if ((nums[0] <= 10 - n))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		/* цикл для перевода цифр */
		while (curr > 0)
		{
			if (nums[curr] == 9)
			{
				nums[curr - 1] += 1;
				nums[curr] = nums[curr - 1] + 1;
			}
			curr -= 1;
		}
	}
}

/* реализация ft_putchar
* void ft_putchar(char c) 
* {
*    // 1 - запись в stdout
*    // &c - адрес параметра c
*    // 1 - количество байт которое нужно записать (1 byte == 1 char)
*    write(1, &c, 1);  // функция из unistd.h
* }
*/

/* тест
* int main(void) 
* {
*    ft_print_combn(2);
*    return (0);
* }
*/
