#include <iostream>
using namespace std;

class BankAccount
{
private:
    const int accno;
    string name;
    mutable double balance;

public:

    BankAccount(int accno, string name, double balance) : accno(accno)
    {
        this->name = name;
        this->balance = balance;
    }

    double getBalance() const
    {
        return balance;
    }

    // can i make the deposit function const?
    void deposit() const
    {
        double deposit;
        cout << "enter depsit amount" << endl;
        cin >> deposit;
        balance += deposit;
        cout << "amont deposited" << endl;
        // cout << "Balance : t" << balance << endl;
    }

    // can i make the deposit function const?
    void withdraw()
    {
        double withdraw;
        cout << "enter depsit amount" << endl;
        cin >> withdraw;
        if (withdraw < balance)
        {
            balance -= withdraw;
            cout << "amount withdrawed" << endl;
        }
        else
        {
            cout << "low balance" << endl;
        }

        //   cout << "Balance : t" << balance << endl;
    }

    void displayAccountDetails() const
    {
        cout << "Accno - " << accno << endl;
        cout << "Name - " << name << endl;
        cout << "Balance - " << balance << endl;
    }
};

int main()
{
    BankAccount acc;
    BankAccount acc1(1001, "rohan", 10000);
    acc1.displayAccountDetails();
    int choice;

    {
        cout << "0. Exit\n";
        cout << "1. create account \n";
        cout << "2. display account details \n";
        cout << "3. deposit \n";
        cout << "4. withdraw \n";
        cout << "5. check balance \n";
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
            acc.displayAccountDetails();
            break;
        case 3:
            s.acceptStudentfromConsole();
            break;
        case 4:
            s.acceptStudentfromConsole();
            break;
        case 5:
            s.acceptStudentfromConsole();
            break;
        default:
            cout << "invalid" << endl;
            break;
        }
    }
    while (choice != 0)
        ;
    cout << "ThankY Ou" << endl;

    return 0;
}