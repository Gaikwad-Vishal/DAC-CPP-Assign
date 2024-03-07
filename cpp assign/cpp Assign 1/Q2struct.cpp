// using struct
#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 12;
    ptrDate->month = 05;
    ptrDate->year = 2002;
}
void printDateOnConsole(struct Date *ptrDate)
{
    cout << ptrDate->day << " -" << ptrDate->month << " - " << ptrDate->year << endl;
}
void acceptDateformConsole(struct Date *ptrDate)
{
    cout << "Enter day   : ";
    cin >> ptrDate->day;
    cout << "Enter month : ";
    cin >> ptrDate->month;
    cout << "Enter year  : ";
    cin >> ptrDate->year;
}
bool isLeapYear(struct Date *ptrDate)
{
    if (ptrDate->year % 4 == 0)
    {
        if (ptrDate->year % 100 == 0)
        {
            return ptrDate->year % 400 == 0;
        }
        return true;
    }
    return false;
}

int main()
{
    Date d1;
    initDate(&d1);
    int choice;
    do
    {
        cout << "0. Exit\n";
        cout << "1. Print Date\n";
        cout << "2. Accept Date From User\n";
        cout << "3. Leap year or not\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            printDateOnConsole(&d1);
            break;

        case 2:
            acceptDateformConsole(&d1);
            break;
        case 3:
            if (isLeapYear(&d1))
            {
                cout << "It is a Leap Year" << endl;
            }
            else
            {
                cout << "It is not a Leap Year" << endl;
            }
            break;

        case 0:
            break;
        default:
            cout << "Invalid choice!!\n";
        }
    } while (choice != 0);
    cout << "thank you" << endl;
    return 0;
}