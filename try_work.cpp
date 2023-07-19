#include <iostream>

int main(){
    std::cout << "This program is to collect ages of 3 students.\n" << std::endl;

    //declare variables
    double averageAge;
    int age1, age2, age3, sum;

    // Input age of first student
    std::cout << "Enter the age of the first student: ";
    std::cin >> age1;

    // Input age of second student
    std::cout << "Enter the age of the second student: ";
    std::cin >> age2;

    // Input age of third student
    std::cout << "Enter the age of the third student: ";
    std::cin >> age3;

    // Calculate average age
    sum = (age1 + age2 + age3);
    averageAge = sum / 3.0;

    // Compare the ages to find the oldest student
    if (age1 >= age2 && age1 >= age3) {
        std::cout << "The first student is the oldest." << std::endl;
    } else if (age2 >= age1 && age2 >= age3) {
        std::cout << "The second student is the oldest." << std::endl;
    } else {
        std::cout << "The third student is the oldest." << std::endl;
    }

    std::cout << "The average age of the three students is: " << averageAge << std::endl;

    return 0;
}