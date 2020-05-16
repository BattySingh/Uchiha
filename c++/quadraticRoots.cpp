// Program to find the roots of a Quadratic Equation
#include<iostream>
#include<cmath>

int main() {

    // input
    float a, b, c;
    float rootOne, rootTwo;

    std::cout << "Enter the value of a, b and c (with space separated): ";
    std::cin >> a >> b >> c;

    // process
    rootOne = (( -b ) - sqrt( (b * b) - (4 * a * c) )) / ( 2 * a );
    rootTwo = (( -b ) + sqrt( (b * b) - (4 * a * c) )) / ( 2 * a );

    // output
    std::cout << "Two roots of the Quadratic Equation are: " << rootOne << " and " << rootTwo;

    return 0;
}