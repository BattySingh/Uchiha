// Program to find the distance between two points
#include<iostream>
#include<cmath>

int main() {
    // input
    int x1, x2, y1, y2;
    float distance;

    std::cout << "Enter the first point: ";
    std::cin >> x1 >> y1;

    std::cout << "Enter the second point: ";
    std::cin >> x2 >> y2;

    // process
    distance = sqrt( ( pow( (x2 - x1) , 2)) + pow( (y2 - y1) , 2) );

    // output
    std::cout << "Distance between 2 points is: " << distance;

    return 0;
}