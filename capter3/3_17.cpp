#include<iostream>
#include<vector>

using namespace::std;

int main()
{
    string word;
    vector<string> text;

    while(cin>>word)
        text.push_back(word);
    for(auto &v:text)
    {
        for (char i = 0; i < v.size();i++)
        {
            v[i] -= 32;
        }
    }

    for(auto i:text)
        cout << i << endl;

    return 0;
}
