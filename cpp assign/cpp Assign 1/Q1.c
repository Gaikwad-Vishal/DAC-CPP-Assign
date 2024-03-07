#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date *ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}
void printDateOnConsole(struct Date *ptrDate)
{
    printf("%d-", ptrDate->day);
    printf("%d-", ptrDate->month);
    printf("%d\n", ptrDate->year);
}
void acceptDatefromConsole(struct Date *ptrDate)
{

    printf("enter day ");
    scanf("%d", &ptrDate->day);
    printf("enter month ");
    scanf("%d", &ptrDate->month);
    printf("enter year ");
    scanf("%d", &ptrDate->year);
}

int main()
{
    int choice;
    struct Date d;
    initDate(&d);

    do
    {
        printf("0.Exit\n");
        printf("1.Accept\n");
        printf("2.Display on Console\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            break;

        case 1:
            acceptDatefromConsole(&d);
            break;

        case 2:
            printDateOnConsole(&d);
            break;
        default:
            printf("invalid \n");
            break;
        }
    } while (choice != 0);
    printf("thank you\n");
    return 0;
}