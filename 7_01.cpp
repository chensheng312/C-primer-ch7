#include<iostream>
#include<iterator>
#include<string>
#include<cstring>
#include<vector>
#include<stdexcept>
#include<math.h>

using namespace std;

struct Sales_data
{
    string bookNo;
    unsigned units_sold=0;
    double revenue=0;
};

int main( )
{

	 Sales_data total;
	 double price;
	 if(cin>>total.bookNo>>price>>total.units_sold)
     {
         total.revenue=total.units_sold*price;
         Sales_data trans;
         while(cin>>trans.bookNo>>price>>trans.units_sold)
         {
             trans.revenue=trans.units_sold*price;
             if(total.bookNo==trans.bookNo)
                {
                    total.revenue+=trans.revenue;
                    total.units_sold+=trans.units_sold;
                }

             else
             {
                 cout<<total.bookNo<<total.revenue<<total.units_sold<<endl;
                 total=trans;
             }
         }
         cout<<total.bookNo<<total.revenue<<total.units_sold<<endl;

     }
	 else
     {
         cerr<<"No data>!"<<endl;
         return -1;
     }
     return 0;
}
