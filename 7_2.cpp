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
//��������ʹ����ʽ��thisָ����ʺ��������ߵ�ĳ�������Ա��������Ҫ�ѵ��ú����Ķ��󵱳�һ�����������ʡ�
//return ��������thisָ���Ի��ִ�иú����Ķ��󣬼��������������÷���total�����á�
#endif // CP5_ex7_02_h
