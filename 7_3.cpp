
//ex7.3

#include "CP5_ex7_02_h.h"
#include <iostream>

using namespace std;

int main()
{
    Sale_data total;
    if(cin>>total.bookNo>>total.units_sold>>total.revenue)
    {
        Sale_data trans;
        while(cin>>trans.bookNo>>trans.units_sold>>total.revenue)
        {
            if(total.isbn()==trans.isbn())
                total.combine(trans);
            else
            {
                cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
                total=trans;
            }
        }
        cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
    }
    else
    {
        cerr<<"No data?!"<<endl;

    }
    return 0;
}
