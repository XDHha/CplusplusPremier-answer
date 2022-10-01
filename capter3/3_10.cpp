#include<iostream>
#include<string>

using namespace::std;

int main()
{
    string str;

    cin >> str;
    for (char i = 0; i < str.size();i++)
    {
        if(ispunct(str[i]))
            ;
        else
            cout << str[i];
    }

    return 0;
}
