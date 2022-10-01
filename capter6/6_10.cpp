#include<iostream>

void swap(int &pa, int &pb);

int main()
{
    int a = 9, b = 10;
    swap(a, b);
    std::cout << "a=" << a << ","
              << "b=" << b;

    return 0;
}

// void swap(int *pa,int *pb)
// {
//     int tmp;
//     tmp = *pa;
//     *pa = *pb;
//     *pb = tmp;
// }

void swap(int &a,int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
