void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b) 
{
	int		*p;
	
	p = a;
	*a = *a / *b;
	*b = *p % *b;
}

/* тест
int		main(void) 
{
	int		a;
	int		b;

	a = 7;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}
*/