// Program to find the sum of first n natrual numbers
#include<iostream>

int main() {

    // input
    int num, result;

    std::cout << "Enter the end point till you want to find the sum of natural numbers: ";
    std::cin >> num;

    // process
    result = (num * (num + 1)) / 2;

    // output
    std::cout << "The sum of first " << num << " natural numbers is: " << result;

    return 0;
}