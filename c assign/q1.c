#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int max = 0;
    for (int i = 0; i < argc; i++)
    {
        if (atoi(argv[i]) > max)
            max = atoi(argv[i]);
    }
    printf("The greatest number is %d\n", max);
    return 0;
}