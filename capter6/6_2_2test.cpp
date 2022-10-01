#include<iostream>
#include<string>

std::string::size_type find_char(const std::string &s, char c, std::string::size_type &occurs);

int main()
{
    std::string s("vallllue");
    std::string::size_type cnt = 0;
    find_char(s, 'l', cnt);
    std::cout << "l count is:" << cnt;
    return 0;
}

std::string::size_type find_char(const std::string &s, char c, std::string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size();++i){//遍历整个字符串
        if(s[i]==c){
            if(ret==s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;

}


