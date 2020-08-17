void ft_div_mod(int a, int b, int* div, int* mod);

void ft_div_mod(int a, int b, int* div, int* mod) 
{
    *div = a/b;
    *mod = a%b;
}

/* тест
* int main(void) 
* {
*    int a = 5;
*    int b = 10;
*    int* div = (int*)malloc(sizeof(int*)); // allocate memory for pointers
*    int* mod = (int*)malloc(sizeof(int*));
*    ft_div_mod(a, b, div, mod);
*    free(div);
*    free(mod);
*    return (0);
*}
*/