#include<iostream>

int absolute(int val);

int main()
{
    int num = 0;

    std::cin >> num;
    std::cout << "absolute is:" << absolute(num);

    return 0;
}

int absolute(int val)
{
    int result = 0;

    if(val>=0)
        result = val;
    else
        result = (-val);

    return result;
}
