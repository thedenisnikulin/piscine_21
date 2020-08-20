void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod) 
{
	*div = a / b;
	*mod = a % b;
}

/* тест
int		main(void) 
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 5;
	b = 10;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	return (0);
}
*/