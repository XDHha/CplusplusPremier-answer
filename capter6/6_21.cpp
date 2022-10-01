#include<iostream>

using namespace::std;

int compare(const int a, const int *b);

int main()
{
    int a = 3, b = 4;
    cout << "max is " << compare(a, &b) << endl;

    return 0;
}

int compare(const int a,const int *b){
    return a > (*b) ? a : (*b);
}
