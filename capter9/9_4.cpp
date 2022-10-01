#include<iostream>
#include<vector>
#include<algorithm>

using namespace::std;

bool find(vector<int>::iterator beg,vector<int>::iterator end,int val)
{
    for (auto it = beg; beg != end;++it){
        if(*it==val)
            return 1;
    }

    return 0;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    int num = 2;
    cout << "flag is equal " << find(v.begin(), v.end(), num) << endl;
    
    return 0;
}
