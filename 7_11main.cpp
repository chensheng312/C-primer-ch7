
#include "CP5_ex7_06_h.h"



int main ()
{
    Sale_data a;
    print(std::cout,a)<<std::endl;
    Sale_data b("402-j-4");
    print(std::cout,b)<<std::endl;
    Sale_data c("402-j-4",1,10.0);
    print(std::cout,c)<<std::endl;
    Sale_data d(std::cin);
    print(std::cout,d)<<std::endl;
    return 0;
}
