#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "You won a bumper stick!\n";
            break;
        case 2: std::cout << "You won a Jorli juice stick!\n";
            break;
        case 3: std::cout << "You won a Amazone gift card!\n";
            break;
        case 4: std::cout << "You won a t-shirt!\n";
            break;
        case 5: std::cout << "You won a African Goat!\n";
            break;
    }
}