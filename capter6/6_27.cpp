#include<iostream>
#include<initializer_list>

using namespace::std;

int sum(initializer_list<int> const& num);

int main()
{
    initializer_list<int> lst{1, 2, 3, 4, 5, 6, 7};

    cout << "sum=" << sum(lst) << endl;

    return 0;
}

int sum(initializer_list<int> const& num){
    // auto a = num.begin();
    int sum = 0;

    // for(auto it=num.begin();it!=num.end();++it)
    //     sum += *it;

    for(auto i:num)
        sum += i;
    return sum;
}


