#ifndef CP5_ex7_11_h
#define CP5_ex7_11_h
#include <string>
#include<iostream>

struct Sale_data
{
    //add constructor
    Sale_data() = default;
    Sale_data(const std::string &s): bookNo(s) {}
    Sale_data(const std::string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(p*n) {}
    Sale_data(std::istream &is);
    //end
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


#endif // CP5_ex7_11_h
