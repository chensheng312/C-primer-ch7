#ifndef CP5_ex7_06_h
#define CP5_ex7_06_h

#include <string>
struct Sale_data
{
    std::string isbn () const {return bookNo;}
    Sale_data& combine(const Sale_data&);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold=0;
    double revenue = 0.0;
};

Sale_data add(const Sale_data&, const Sale_data&);
std::ostream &print(std::ostream&, const Sale_data&);
std::istream &read(std::istream&,Sale_data&);



#endif // CP5_ex7_06_h
