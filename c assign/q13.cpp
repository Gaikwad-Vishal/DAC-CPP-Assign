
#include <bits/stdc++.h>
using namespace std;

void duplicates(string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].compare(arr[j]) == 0)
                cout << arr[j] << endl;
        }
    }
}

int main()
{
    string fruits[] = {"apple", "orange", "banana", "apple", "strawberry", "grape", "cherry", "orange", "banana", "apple", "mango", "pineapple", "kiwi", "grape", "cherry", "orange", "banana", "apple", "watermelon", "cantaloupe"};
    duplicates(fruits, 20);

    return 0;
}