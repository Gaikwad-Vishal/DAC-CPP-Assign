#include <stdio.h>
int printBinary(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * printBinary(n / 2));
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Given Number: %d\n", num);
    printf("Binary equivalent: %d\n", printBinary(num));
    printf("Octal equivalent: %o\n", num);
    printf("Hexadecimal equivalent: %x\n", num);
    return 0;
}