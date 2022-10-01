#include<iostream>
#include<string>

using namespace::std;

int main()
{
    string str;
    char i = 0, str_len = 0;

    cout << "Enter a string and hit ENTER when finished:" << endl;
    cin >> str;
    str_len = str.size();

    // while(i<str_len)
    // {
    //     str[i] = 'X';
    //     i++;
    // }
    for (i = 0; i < str_len;i++)
    {
        str[i] = 'X';
    }

    cout << str << endl;

    return 0;
}
