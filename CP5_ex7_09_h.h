#ifndef CP5_ex7_09h
#define CP5_ex7_09_h

#include<iostream>
#include <string>
using namespace std;
struct Person
{
    string Name;
    string Address;
};

istream &read(istream & is, Person & per1)
{
    is>>Person.Name>>Person.Address;
    if(!is)
        per1=Person();
    return is;
}
ostream &print(ostream &os, const Person &per2)
{
    os<<per2.Name<<" "<<per2.Address;
    return os;
}
#endif // CP5_ex7_09_h
