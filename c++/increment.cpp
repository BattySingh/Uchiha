// Program to learn about increment operator
#include<iostream>

int main() {
    int i = 5;

    std::cout << i++ << " ";
    std::cout << ++i;

    i = 4;
    int y;

    y = i++;
    std::cout << " " << y;

    return 0;
}