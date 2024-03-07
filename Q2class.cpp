// using class
#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        day = 14;
        month = 8;
        year = 2001;
    }
    void printDateOnConsole()
    {
        cout << day << "-" << month << "-" << year << endl;
    }
    void acceptDateFromConsole()
    {
        cout << "Enter day   : ";
        cin >> day;
        cout << "Enter month : ";
        cin >> month;
        cout << "Enter year  : ";
        cin >> year;
    }
    bool isLeapYear()
    {
        if (this->year % 4 == 0)
        {
            if (this->year % 100 == 0)
            {
                return this->year % 400 == 0;
            }
            return true;
        }
        return false;
    }
};
int main()
{
    Date d1;
    d1.initDate();
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
            d1.printDateOnConsole();
            break;

        case 2:
            d1.acceptDateFromConsole();
            break;
        case 3:
            if (d1.isLeapYear())
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