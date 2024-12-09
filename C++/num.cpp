#include <iostream>

int main() {
    //Exercise 1

 
    int number;
    std::cout << "Enter a six-digit number: ";
    std::cin >> number;

    
    if (number < 100000 || number > 999999) {
        std::cout << "You did not enter a six-digit number." << std::endl;
        return 1;
    }

    
    int sumnumber = (number / 100000) + (number / 10000 % 10) + (number / 1000 % 10);
    int sumnumber = (number / 100 % 10) + (number / 10 % 10) + (number % 10);

   
    if (sumnumber == sumnumber) {
        std::cout << "Lucky number!" << std::endl;
    }
    else {
        std::cout << "The number is not lucky." << std::endl;
    }


//Exercise 2
    int number;

    std::cout << "Enter four-digit number: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "You did not enter a four-digit number." << std::endl;
        return 1;
    }

    int num1 = number / 1000;
    int num2 = (number / 100) % 10;
    int num3 = (number / 10) % 10;
    int num4 = number % 10;

    int newNumber = num2 * 1000 + num1 * 100 + num4 * 10 + num3;

    std::cout << "New number: " << newNumber << std::endl;

    //Exercise 3
   int num1, Max_num;

   std::cout << "Enter first number: ";
   std::cin >> num1;
   Max_num = num1;


   for (int i = 1; i < 7; ++i) {
       std::cout << "Enter " << i + 1 << " number: ";
       std::cin >> num1;
       if (num1 > Max_num) {
           Max_num = num1;
       }
   }
   std::cout << "Max number :" << std::endl;

    return 0;
}
