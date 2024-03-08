#include <iostream>
using namespace std;

int accept();
void result(int);

int main()
{
   int n, sum = 0;
   for (int i = 1; i <= 5; i++)
   {
      cout << "Enter Subject " << i << " marks: ";
      n = accept();
      if (n > 20)
      {
         cout << "Re-enter Marks as it shouldn't be greater than 20\n";
         i--;
         continue;
      }
      sum += n;
   }
   result(sum);
}

int accept()
{
   int n;
   cin >> n;
   return n;
}

void result(int sum)
{
   cout << "\nFinal Grade: ";
   if (sum >= 90)
      cout << "\nEx";
   else if (sum >= 80)
      cout << "\nA";
   else if (sum >= 70)
      cout << "\nB";
   else if (sum >= 60)
      cout << "\nC";
   else
      cout << "\nF";
}