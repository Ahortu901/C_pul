#include <iostream>
#include <ctime>
//Write a program that takes an input from the user
//and check if the input is in the list if so the the user wins the game else computer wins the game

using namespace std;
int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    int ANSWER;

    cout << "Please enter your number: ";
    cin >> ANSWER;
    if (ANSWER == randNum)
    {
        cout << "You won the game\n";
    }else cout << "You lost the game\n";
    
    return 0;
}