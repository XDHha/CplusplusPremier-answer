#include<iostream>
#include<string>

using namespace::std;

string make_plural(size_t ctr, const string &word, const string &ending);

int main()
{
    string str1("success"), str2("failure");

    cout << "success singular is " << make_plural(1, str1) << endl;
    cout << "success plural is " << make_plural(2, str1,"es") << endl;

    cout << "failure singular is " << make_plural(1, str2,"s") << endl;
    cout << "failure plural is " << make_plural(2, str2,"s") << endl;
    return 0;
}

string make_plural(size_t ctr, const string& word,const string &ending="s")
{
    return (ctr > 1) ? (word + ending) : word;
}