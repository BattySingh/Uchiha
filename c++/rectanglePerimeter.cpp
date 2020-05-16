// Program to find the perimeter of the rectangle
#include<iostream>

int main() {
    // input
    int length, breadth, perimeter;

    std::cout << "Enter the length of the reactangle: ";
    std::cin >> length;

    std::cout << "Enter the breadth of rectangle: ";
    std::cin >> breadth;

    // process
    perimeter = 2 * (length + breadth);

    // output
    std::cout << "The perimeter of the Rectangle: " << perimeter;

    return 0;
}