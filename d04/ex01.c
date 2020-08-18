int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb)
{
    if (nb == 1 || nb == 0)
    {
        return (1);
    }
    else if (nb > 12 || nb < 0)  /* т.к. (13! = 6 227 020 800) > (max int = 2 147 483 647) */
    {
        return (0);
    }
    else
    {
        return (nb + ft_recursive_factorial(nb - 1));
    }
    
}

/** тест
 * int main(void)
 * {
 *     int num;
 * 
 *     num = 3;
 *     num = ft_recursive_factorial(num);  // expected output: 6
 *     ft_putchar(num + '0');
 *     return (0);
 * }
 * 
 * void ft_putchar(char c)
 * {
 *     write(1, &c, 1);
 * }
*/