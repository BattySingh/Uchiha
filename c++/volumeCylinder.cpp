// Program to find volume of a cylinder
#include<iostream>

int main() {
    // input
    float pi, radius, height, volume;
    pi = 3.14f;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    std::cout << "Enter the height: ";
    std::cin >> height;

    // process
    volume = pi * radius * radius * height;

    // output
    std::cout << "The Volume of cylinder is: " << volume;

    return 0;
}