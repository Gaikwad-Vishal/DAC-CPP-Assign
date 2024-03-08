#include <iostream>
using namespace std;
class BankAccount
{
private:
    const int accno;
    string name;
    double balance;
    static int generate_accno;

public:
    BankAccount() : accno(++generate_accno) {}

    BankAccount(string name, double balance) : accno(++generate_accno)
    {
        this->name = name;
        this->balance = balance;
    }

    void acceptaccountDeatils()
    {
        cout << "Enter name - " << endl;
        cin >> name;
        cout << "Enter initial Balance - " << endl;
        cin >> balance;
    }

    void displayAccountDeatils()
    {
        cout << "Accno = " << accno << endl;
        cout << "Name = " << name << endl;
        cout << "Balanace = " << balance << endl;
    }
    void deposit()
    {
        double depo;
        cout << "enter amount to be deposited: " << endl;
        cin >> depo;
        balance += depo;
        cout << "After depositing Balance is: " << balance << endl;
    }
    void withdraw()
    {
        double withDraw;
        cout << "enter amount to be withdrawed: " << endl;
        cin >> withDraw;
        if (withDraw > balance)
        {
            cout << "not enough balance" << endl;
        }
        else
            balance -= withDraw;
        cout << "After withdrawing Balance is: " << balance << endl;
    }
    void checkBal()
    {
        cout << "Balanace = " << balance << endl;
    }
};

int BankAccount::generate_accno = 1000;

int main()
{
    // todo -> do it in menu driven code
    BankAccount *accptr;

    int choice;
    do
    {
        cout << "\n0. Exit\n";
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
            accptr = new BankAccount;
            cout << endl;
            accptr->acceptaccountDeatils();
            break;
        case 2:
            cout << endl;
            accptr->displayAccountDeatils();
            break;
        case 3:
            cout << endl;
            accptr->deposit();
            break;
        case 4:
            cout << endl;
            accptr->withdraw();
            break;
        case 5:
            cout << endl;
            accptr->checkBal();
            break;
        default:
            cout << endl;
            cout << "invalid" << endl;
            break;
        }
    } while (choice != 0);
    cout << "ThankY Ou" << endl;

    accptr = NULL;
    return 0;
}

int main1()
{
    BankAccount acc1("rohan", 10000);
    BankAccount acc2("nilesh", 15000);
    BankAccount acc3("nitin", 20000);
    BankAccount acc4("Rajiv", 20000);
    BankAccount acc5("yogesh", 20000);

    acc1.displayAccountDeatils();
    acc2.displayAccountDeatils();
    acc3.displayAccountDeatils();
    acc4.displayAccountDeatils();
    acc5.displayAccountDeatils();

    return 0;
}
