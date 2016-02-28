#ifndef CP5_ex7_02_h
#define CP5_ex7_02_h

#include <string>
struct Sale_data
{
    std::string isbn () const {return bookNo;}
    Sale_data& combine(const Sale_data&);

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
//note _ this
//我们无须使用隐式的this指针访问函数调用者的某个具体成员，而是需要把调用函数的对象当成一个整体来访问。
//return 语句解引用this指针以获得执行该函数的对象，即，上面的这个调用返回total的引用。
#endif // CP5_ex7_02_h
