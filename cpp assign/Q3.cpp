#include <iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    int marks;

public:
    void initStudent()
    {
        rollno = 83672;
        name = "vishal";
        marks = 69;
    }
    void printStudentOnConsole()
    {
        cout << "rollno: " << rollno << endl;
        cout << "name: " << name << endl;
        cout << "marks: " << marks << endl;
    }
    void acceptStudentfromConsole()
    {
        cout << "enter rollno ";
        cin >> rollno;
        cout << "enter name ";
        cin >> name;
        cout << "enter marks ";
        cin >> marks;
    }
};

int main()
{
    int choice;
    Student s;
    s.initStudent();
    do
    {
        cout << "0. Exit\n";
        cout << "1. Print Date\n";
        cout << "2. Accept Date From User\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;

        case 1:
            s.printStudentOnConsole();
            break;

        case 2:
            s.acceptStudentfromConsole();
            break;
        default:
            cout << "invalid" << endl;
            break;
        }
    } while (choice != 0);
    cout << "thank you" << endl;
    return 0;
}
