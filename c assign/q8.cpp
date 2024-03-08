
#include <iostream>
using namespace std;
typedef struct student
{
    char studentName[30];
    char rollNo[10];
    int totalMarks;
} student;
int main()
{
    student s1;

    cout << "Enter name of student: ";
    cin.getline(s1.studentName, 30);
    cout << "\nEnter roll no. of student: ";
    cin.getline(s1.rollNo, 10);
    cout << "\nEnter total marks of student: ";
    cin >> s1.totalMarks;

    cout << "\nName:\t\t" << s1.studentName;
    cout << "\nRoll no.:\t" << s1.rollNo;
    cout << "\nTotal Marks:\t" << s1.totalMarks;

    return 0;
}