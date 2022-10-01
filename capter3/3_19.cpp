#include<iostream>
#include<vector>

using namespace::std;

int main()
{
    vector<int> v1(10, 42);
    vector<int> v2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    for(auto v:v1)
        cout << v << ' ';
    cout << endl;

    for(auto v:v2)
        cout << v << ' ';
    cout << endl;

    for(auto v:v3)
        cout << v << ' ';
    cout << endl;

    return 0;
}
