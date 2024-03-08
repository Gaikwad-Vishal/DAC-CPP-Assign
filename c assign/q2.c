#include <stdio.h>

int fact(int n)
{
    int factorial = 1;
    if (n == 1 || n == 0)
        return 1;
    factorial = n * fact(n - 1);
    return factorial;
}
int main(void)
{
    int num;
    printf("Enter Number ");
    scanf("%d", &num);
    printf(" Factorial %d", fact(num));
    return 0;
}