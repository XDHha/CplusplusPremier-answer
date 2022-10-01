#include<iostream>
#include<vector>

using namespace::std;

int main()
{
    int num = 0;
    vector<int> val;

    //读入数据，并存入val对象中
    while(cin>>num)
        val.push_back(num);

    //输出每对相邻整数的和
    // for (int i = 0; i < (val.size() - 1);i++)
    //     cout << val[i] + val[i + 1] << endl;

    //输出第1个和最后一个的和，接着输出第2个和倒数第2个的和，以此类推
    // for (int i = 0; i < (val.size()/2);i++)
    //      cout << val[i] + val[val.size()-1-i] << endl;
    
    return 0;
}
