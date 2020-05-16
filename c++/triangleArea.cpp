// Program to take input from user and find the area of triangle
#include<iostream>

int main() {
    float base, height, area;

    // input
    std::cout << "Enter the value of Base: ";
    std::cin >> base;
    std::cout << "Base: " << base;

    std::cout << "Enter the value of Height: ";
    std::cin >> height;
    std::cout << "Height: " << height;

    // processing
    area = (base * height) / 2;

    // output
    std::cout << "The area of Triangle is: " << area;

    return 0;
}