/*
*比较两个字符串，输出较大的字符串
*
*/
/*
#include<iostream>
#include<string>

using namespace ::std;

int main()
{
    string str1, str2;

    cin >> str1 >> str2;
    if(str1!=str2)
        cout << ((str1 >= str2) ? str1 : str2 )<< endl;

    return 0;
}*/

/*比较两个字符串长度，输出较长的那个
*
*/
#include<iostream>
#include<string>

using namespace ::std;

int main()
{
    string str1, str2;

    cin >> str1 >> str2;
    if(str1.size()!=str2.size())
    {
        cout << ((str1.size() >= str2.size()) ? str1 : str2) << endl;
    }

    return 0;
}


