#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    int i = 0, j = str.length() - 1, flag = 0;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag > 0)
    {
        cout << "not palindrome";
    }
    else
    {
        cout << "palindrome";
    }

    return 0;
}
