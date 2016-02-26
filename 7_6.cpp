#include "CP5_ex7_06_h.h"
#include<string>
#include<iostream>

using namespace std;

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
