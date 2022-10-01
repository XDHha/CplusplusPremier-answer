#include<iostream>

using namespace ::std;

void print(const char *cp);
void print(const int *beg, const int *end);

int main()
{
    //string s1("value");
    int j[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    //print(s1.c_str());
    print(begin(j), end(j));
    
    return 0;
}

/* void print(const char *cp)
{
    if(cp){
        while(*cp)
            cout << *cp++;
    }

} */

void print(const int *beg,const int *end){
    while(beg != end)
        cout << *beg++ << endl;
}

