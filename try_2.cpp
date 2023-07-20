#include <iostream>

using namespace std;

int main ()
{
    int x = 3;
    int y = 4;

    cout << "The first two integers for X and Y are:\n" << "X = "<< x << "\nY = "<< y;

   int new_v = x *= y;
   cout << endl;
   cout << "the variable for new_V is: "<< new_v << endl;
   y++;
   cout << "the new value for Y is: "<< y << endl;

   int T = 9 % 6;
   cout << T;

   return 0;

}