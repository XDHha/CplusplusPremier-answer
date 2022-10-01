#include <iostream>
#include <string>

using namespace ::std;

int main()
{
    string str;

    cout << "Enter a string and hit ENTER when finished:" << endl;
    cin >> str;
    for(char &c:str)
    {
        c = 'X';
    }
    cout << str << endl;

    return 0;
}