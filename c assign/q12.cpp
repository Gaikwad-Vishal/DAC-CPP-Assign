#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    char temp;
    cout << "Enter string: ";
    cin >> str;

    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout << str;
    return 0;
}
