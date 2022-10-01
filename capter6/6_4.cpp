#include<iostream>
#include"Chapter6.h"

int main()
{
    int num = 0;

    std::cout << "Please enter num:" << std::endl;
    std::cin >> num;

    std::cout << "factorial of num is:" << fact(num) << std::endl;

    return 0;
}

