/*
    Create a function that takes a pointer to pointer to pointer to pointer to pointer
    to pointer to pointer to pointer to pointer to int as a parameter and sets the value
    "42" to that int.
*/
void ft_ultimate_ft(int *********nbr);

int main() {
	int n = 1;
    int* n1 = &n;
	int** n2 = &n1;
	int*** n3 = &n2;
	int**** n4 = &n3;
	int***** n5 = &n4;
	int****** n6 = &n5;
	int******* n7 = &n6;
	int******** n8 = &n7;
	int********* n9 = &n8;
    ft_ultimate_ft(n9);
    return 0;
};

void ft_ultimate_ft(int *********nbr) {
    *********nbr = 42;
}