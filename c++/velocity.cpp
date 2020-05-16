// Program to find the velocity
#include<iostream>

int main() {
    // input
    float v, u, speed, a;

    std::cout << "Enter the value of v: ";
    std::cin >> v;

    std::cout << "Enter the value of u: ";
    std::cin >> u;

    std::cout << "Enter the value of a: ";
    std::cin >> a;

    // process
    speed = ( (v * v) - (u * u) ) / (2 * a);

    // output
    std::cout << "The speed is: " << speed;

    return 0;
}