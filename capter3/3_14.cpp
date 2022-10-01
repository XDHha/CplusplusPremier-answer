#include<iostream>
#include<vector>

using namespace ::std;

int main()
{
    int num = 0;
    vector<int> v1;

    while(cin>>num)
    {
        v1.push_back(num);
    }
    //cout << v1.size() << endl;

    return 0;
}
