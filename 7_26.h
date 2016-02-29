#ifndef CP5_ex7_26_h
#define CP5_ex7_26_h
#include <string>
#include<iostream>

struct Sale_data;
std::istream &read(std::istream& ,Sale_data& );

class Sale_data
{
    friend Sale_data add(const Sale_data&, const Sale_data&);
    friend std::istream &read(std::istream& ,Sale_data&);
    friend std::ostream &print(std::ostream &os,const Sale_data &item);

    public:
    Sale_data() = default;
    Sale_data(const std::string &s): bookNo(s) {}
    Sale_data(const std::string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(p*n) {}
    Sale_data(std::istream &is)
    {
        read(is,*this);
    }
    //end
    std::string isbn () const {return bookNo;}
    Sale_data& combine(const Sale_data&);

    private:
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold=0;
    double revenue = 0.0;
};


Sale_data& Sale_data::combine(const Sale_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue +=rhs.revenue;
    return *this;
}
inline double Sale_data::avg_price()const
{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}



std::istream &read(std::istream& is,Sale_data&item)
{
    double price = 0.0;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue = price * item.units_sold;
    return is;

}
std::ostream &print(std::ostream &os,const Sale_data &item)
{
    os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue
    <<" "<<item.avg_price();
    return os;
}
Sale_data add(const Sale_data &lhs,const Sale_data &rhs)
{
    Sale_data sum=lhs;
    sum.combine(rhs);
    return sum;
}
#endif // CP5_ex7_26_h
