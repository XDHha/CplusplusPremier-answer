#include<iostream>
#include<string>

using namespace ::std;

int main()
{
    string word, link_word;

    /* while(cin>>word)
        link_word += word; */
    while(cin>>word)
    {
        word += ' ';
        link_word += word;
    }
    cout << link_word << endl;

    return 0;
}