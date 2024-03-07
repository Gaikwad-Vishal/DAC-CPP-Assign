#include <iostream>
using namespace std;
class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
         building = "Xa";
         street = "Ya";
         city = "Za";
         pin = 000;
    }
  // Address(string building, string street, string city, int pin) : building(building), street(street), city(city), pin(pin) {}
    void accept()
    {
        string building;
        string street;
        string city;
        int pin;
        cout << "Enter Building :";
        cin >> building;
        set_building(building);

        cout << "Enter Street :";
        cin >> street;
        set_street(street);

        cout << "Enter City :";
        cin >> city;
        set_city(city);

        cout << "Enter pincode :";
        cin >> pin;
        set_pin(pin);
    }
    void display()
    {
        cout << "Building: " << get_building() << endl;
        cout << "Street: " << get_street() << endl;
        cout << "city: " << get_city() << endl;
        cout << "pincode: " << get_pin() << endl;
    }
    void set_building(string building)
    {
        this->building = building;
    }
    void set_street(string street)
    {
        this->street = street;
    }
    void set_city(string city)
    {
        this->city = city;
    }
    void set_pin(int pin)
    {
        this->pin = pin;
    }
    string get_building()
    {
        return building;
    }
    string get_street()
    {
        return street;
    }
    string get_city()
    {
        return city;
    }
    int get_pin()
    {
        return pin;
    }
};
int main()
{
    Address a;
    int choice;
    do
    {
        cout << "0. Exit\n";
        cout << "1. Accept \n";
        cout << "2. Display \n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;

        case 1:
            a.accept();
            break;

        case 2:
            a.display();
            break;

        default:
            cout << "invalid" << endl;
            break;
        }
    } while (choice != 0);
    cout << "thank you" << endl;
    return 0;
}