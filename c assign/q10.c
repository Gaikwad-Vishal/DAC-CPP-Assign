#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *num1, const void *num2)
{
    char **a = (char **)num1;
    char **b = (char **)num2;
    return strcmp(*a, *b);
    return strcmp(*(char **)num1, *(char **)num2);
}
int main()
{
    int n, i;
    char *arr[50];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("\nEnter names of the student: ");
    for (i = 0; i < n; i++)
    {
        arr[i] = malloc(100 * sizeof(char));
        scanf("%s", arr[i]);
    }
    qsort(arr, n, sizeof(char *), compare);
    printf("\nThe sorted Names are: ");
    printf("\n[");
    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%s", arr[i]);
            break;
        }
        printf("%s, ", arr[i]);
    }
    printf("]");
}