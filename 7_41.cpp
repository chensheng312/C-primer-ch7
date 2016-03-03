#include "CP5_ex7_41_h.h"
#include <string>
#include<iostream>
#include<vector>


int main ()
{

    Sale_data a("89-h-47g",1,2);
    std::cerr<<std::endl;
    Sale_data b;
    std::cerr<<std::endl;
    Sale_data c("89-h-47g");
    std::cerr<<std::endl;
    Sale_data d(std::cin);
    return 0;
}
