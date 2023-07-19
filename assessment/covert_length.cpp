//**********************************************************
//Program Convert: This program converts measurements
//in feet and inches into centimetres using the
//formula that 1 inch is equal to 2.54 centimeter.
//**********************************************************

    // header file
# include <iostream>
using namespace std;

    //named constants
const double conversion = 2.54;
const int inchesPerFoot = 12;

int main()
{
        //decleare variables
    int feet, inches;
    int totalInches;
    double centmeter;

        //Statement: step 1 - Step 7
    cout << "Enter two integers, one for feet and one for inches: ";
    cin >>feet >> inches;
    cout <<endl;

    cout << "The numbers you entered are: " <<feet << " for feet and " << inches << " for inches" << endl;

    totalInches = inchesPerFoot * feet + inches;
    cout << endl;

    cout << "The total number of inches = " << totalInches << endl;

    centmeter = conversion * totalInches;
    cout << "The number of centmeter = " << centmeter << endl;
    return 0;
}