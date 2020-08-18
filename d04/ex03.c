int ft_recursive_power(int nb, int power);

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
    {
        return (1);
    }
    else if (power < 0)
    {
        return (0);
    }
    else
    {
        return (nb * ft_recursive_power(nb, --power));
    }
}

/** тест
 * void ft_putchar(char c)
 * {
 *     write(1, &c, 1);
 * }
 * 
 * int main(void)
 * {
 *     int num;
 *     int p;
 * 
 *     num = 3;
 *     p = 2;
 *     ft_putchar(ft_recursive_power(num, p) + '0');  // expected output: 9
 *     return (0);
 * }
*/