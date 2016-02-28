
#ifndef CP5_ex7_15_h
#define CP5_ex7_15_h

#include <string>
#include<iostream>

struct Person;
std::istream &read(std::istream &is,Person &info);
struct Person
{
    Person()=default;
    Person(const std::string &s1,const std::string &s2):Name(s1),Address(s2) { }
    Person(std::istream &is) {read(is,*this);};
    std::string Name;
    std::string Address;
    //operation to return Name & Address
    std::string retName() const{return Name;}
    std::string retAddress () const {return Address;}
    // should these functions be const?
    //yes! the const indicate that this is a pointer to const.
};
std::istream &read(std::istream &is,Person &info)
{
    is>>info.Name>>info.Address;
    return is;
}
std::ostream &print(std::ostream &os,const Person &info)
{
    os<<info.Name<<" "<<info.Address;
    return os;
}
#endif // CP5_ex7_15_h
