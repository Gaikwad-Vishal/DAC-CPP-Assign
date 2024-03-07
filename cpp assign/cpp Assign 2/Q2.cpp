#include <iostream>
using namespace std;
class Tollbooth
{
private:
    unsigned int carsTotal;
    double TotAmt;

public:
    Tollbooth(unsigned int carsTotal, double TotAmt) : carsTotal(carsTotal), TotAmt(TotAmt) {}
    void payingCar()
    {
        carsTotal++;
        TotAmt += 0.5;
        printOnConsole();
    }
    void nopayCar()
    {
        carsTotal++;
        printOnConsole();
    }
    void printOnConsole()
    {
        double notPaidAmt = 0;
        double nonPayCar = 0;
        double payCar = 0;
        notPaidAmt = carsTotal * 0.5 - TotAmt;
        nonPayCar = notPaidAmt / 0.5;
        payCar = carsTotal - nonPayCar;

        cout << "Number of paying Cars: " << payCar << endl;
        cout << "Number of non paying Cars: " << nonPayCar << endl;
        cout << "Amount: " << TotAmt << endl;
    }
};
int main()
{
    Tollbooth tb(0, 0.0);
    int choice;
    do
    {
        cout << "    MENU   " << endl;
        cout << " 0 : EXIT   " << endl;
        cout << " 1 : Paying cars " << endl;
        cout << " 2 : non paying cars   " << endl;
        cout << " 3 : Display   " << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            break;
        case 1:
            tb.payingCar();
            break;
        case 2:
            tb.nopayCar();
            break;
        case 3:
            tb.printOnConsole();
            break;
        default:
            cout << "invalid input";
            break;
        }
    } while (choice != 0);
    cout << "Thank YOU" << endl;

    return 0;
}