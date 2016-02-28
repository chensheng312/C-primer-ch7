#include "CP5_ex7_11_h.h"
#include<string>
#include<iostream>

using namespace std;

Sale_data& Sale_data::combine(const Sale_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue +=rhs.revenue;
    return *this;
}
double Sale_data::avg_price()const
{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}

istream &read(istream &is, Sale_data &item)
{
    double price = 0.0;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue = price * item.units_sold;
    return is;

}
ostream &print(ostream &os,const Sale_data &item)
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
Sale_data::Sale_data(std::istream &is)
{
    read(is,*this);
}

