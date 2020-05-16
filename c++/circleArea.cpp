// Program to find the area of the circle
#include<iostream>

int main() {
    // input
    float radius, area, pi;
    pi = 3.14;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    // process
    area = pi * radius * radius;

    // output
    std::cout << "Area of Circle with radius " << radius << " is: " << area;

    return 0;
}