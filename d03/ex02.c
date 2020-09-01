void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b) {
	int		*i;
	
	i = a;
	a = b;
	b = i;
}

/* тест
int		main(void) 
{
	int a;
	int b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	return (0);
}
*/