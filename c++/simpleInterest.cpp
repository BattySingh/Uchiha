// Program to find the simple interest rate
#include<iostream>

int main() {
    // input
    int principle, time;
    float rate, finalAmount;

    std::cout << "Enter the principle, rate and time: ";
    std::cin >> principle >> rate >> time;

    // process
    finalAmount = (principle * rate * time) / 100;

    // output
    std::cout << "The Simple Interest is: " << finalAmount;

    return 0;
}