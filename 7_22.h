
#ifndef CP5_ex7_22_h
#define CP5_ex7_22_h

#include <string>
#include<iostream>

class Person;
std::istream &read(std::istream &is,Person &info);
class Person
{
    friend std::istream &read(std::istream &is,Person &info);
    friend std::ostream &print(std::ostream &os,const Person &info);

    public:
    Person()=default;
    Person(const std::string &s1,const std::string &s2):Name(s1),Address(s2) { }
    Person(std::istream &is) {read(is,*this);};
    std::string retName() const{return Name;}
    std::string retAddress () const {return Address;}

    private
    std::string Name;
    std::string Address;

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
#endif // CP5_ex7_22_h
