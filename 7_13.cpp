
#include "CP5_ex7_12_h.h"



int main ()
{
    Sale_data total(std::cin);
    if(!total.isbn().empty())
    {
        Sale_data trans(std::cin);
        while(!trans.isbn().empty())
        {
            if(total.isbn()==trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout,total)<<std::endl;
                total=trans;
            }
        }
        print(std::cout,total)<<std::endl;
    }
    else
    {
        std::cerr<<"No data?!"<<std::endl;
    }

    return 0;
}
