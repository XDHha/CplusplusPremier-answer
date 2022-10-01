#include<iostream>
#include<vector>
#include<string>

using namespace::std;

int main()
{
    string word ;
    vector<string> v1;

    while(cin>>word)
    {
        v1.push_back(word);
    }
    //cout << v1.size() << endl;

    return 0;
}
