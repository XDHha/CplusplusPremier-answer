#include<iostream>

using namespace ::std;

void is_capital(const string &s);
void trans_to_lowercase(string &s);

int main()
{
    string s1("abCdefg");

    // is_capital(s1);
    trans_to_lowercase(s1);

    cout << s1 << endl;

    return 0;
}

void is_capital(const string &s){
    for(auto c:s){
        if( c>=65 && c<=90)
            cout << "there is capital letters,and it is " << c << endl;
        else
            cout << "there isn't capital letters" << endl;
    }
}

void trans_to_lowercase(string &s){//使用普通引用，因为要改变实参的值
    for(auto &c:s){
        if(c>=65 && c<=90)
            c += 32;
    }
}
