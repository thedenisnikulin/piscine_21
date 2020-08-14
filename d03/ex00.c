void ft_ft(int *nbr);

int main() {
    int n = 1;
    ft_ft(&n);
    return 0;
}

void ft_ft(int *nbr) {
    *nbr = 42;
}