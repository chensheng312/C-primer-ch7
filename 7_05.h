
#ifndef CP5_ex7_04_h
#define CP5_ex7_04_h

#include <string>
using namespace std;
struct Person
{
    string Name;
    string Address;
    //operation to return Name & Address
    string retName() const{return Name;}
    string retAddress () const {return Address;}
    // should these functions be const?
    //yes! the const indicate that this is a pointer to const.
};
#endif // CP5_ex7_04_h

