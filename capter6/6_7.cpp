#include<iostream>

int fun();

int main()
{
    while(1)
        std::cout << "The number of calls is:" << fun() << std::endl;

    return 0;
}

int fun()
{
    static int cnt = 0;
    int tmp = 0;

    if(cnt>0)
        tmp = 1;
    else
        tmp = 0;

    cnt++;

    return tmp;
}
