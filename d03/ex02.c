/*
Create a function that swaps the value of two integers whose addresses are entered
as parameters.
*/

void ft_swap(int* a, int* b);

int main() {
    int a = 1;
    int b = 2;
    ft_swap(&a, &b);
    return 0;
}

void ft_swap(int* a, int* b) {
    int* i = a;
    a = b;
    b = i;
}