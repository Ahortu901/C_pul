#include <iostream>
using namespace std;

const int number=12;

int main()
{
    int firstNum;
    int secondNum;

    firstNum = 18;
    cout << "Line 9: firstNum: " << firstNum <<endl;

    cout << "Line 10: Enter an integer: ";
    cin >>secondNum;

    cout << "Line 13: secondNum: " << secondNum <<endl;

    firstNum = firstNum + secondNum + 2 * secondNum;

    cout << "Line 15: The new value of firstNum: " << firstNum <<endl;
}