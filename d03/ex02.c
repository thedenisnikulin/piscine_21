void ft_swap(int* a, int* b);

void ft_swap(int* a, int* b) {
    int* i = a;
    a = b;
    b = i;
}

/* тест
* int main() {
*    int a = 1;
*    int b = 2;
*    ft_swap(&a, &b);
*    return (0);
* }
*/