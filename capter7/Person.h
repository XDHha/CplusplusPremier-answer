#ifndef _PERSON_H
#define _PERSON_H

using namespace::std;
#include<string>

struct Person
{
    string name, address;

    string get_name() {
        return name;
    }

    string get_address() {
        return address;
    }

    istream& read(istream& is, Person& item)
    {
        is >> item.name >> item.address;

        return is;
    }

    ostream& print(ostream& os, const Person& item)
    {
        os << item.name << item.address;

        return os;
    }
};














#endif/*_PERSON_H*/