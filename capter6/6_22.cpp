#include<iostream>

using namespace::std;

void swap_point(int* &ap, int* &bp);

int main()
{
    int a = 1, b = 2;
    auto ra = &a, rb = &b;
    swap_point(ra, rb);
    cout << "a=" << *ra << " b=" << *rb << endl;

    return 0;
}

void swap_point(int* &ap,int* &bp){
    auto tmp = ap;
    ap = bp;
    bp = tmp;
}
