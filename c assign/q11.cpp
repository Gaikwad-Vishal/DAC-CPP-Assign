#include <iostream>
using namespace std;

struct emp
{
    char firstName[30];
    char lastName[30];
    double salary;
    int totalMarks;
};

void emp_init(struct emp *e)
{
    cout << "Enter employee's first name:" << endl;
    cin >> e->firstName;
    cout << "Enter employee's last name:" << endl;
    cin >> e->lastName;
};

void set_salary(struct emp *e, double sal)
{
    e->salary = sal;
}

void emp_display(struct emp *e)
{
    cout << "Name: " << e->firstName << " " << e->lastName << endl;
}

void salary_display(struct emp *e)
{
    cout << "Yearly salary: " << 12 * e->salary << endl;
}

void salary_increment(struct emp *e)
{
    e->salary = 1.1 * (e->salary);
}

int main()
{
    struct emp e1, e2;
    double sal;

    cout << "Enter details for Employee 1:" << endl;
    emp_init(&e1);
    cout << "Enter monthly salary: ";
    cin >> sal;
    set_salary(&e1, sal);

    cout << "Enter details for Employee 2:" << endl;
    emp_init(&e2);
    cout << "Enter monthly salary: ";
    cin >> sal;
    set_salary(&e2, sal);

    cout << "\nDisplay Employee 1:" << endl;
    emp_display(&e1);
    salary_display(&e1);

    cout << "\nDisplay Employee 2:" << endl;
    emp_display(&e2);
    salary_display(&e2);

    salary_increment(&e1);
    salary_increment(&e2);

    cout << "Employee 1 salary after increment: " << endl;
    salary_display(&e1);

    cout << "Employee 2 salary after increment: " << endl;
    salary_display(&e2);

    return 0;
}