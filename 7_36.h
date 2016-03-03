#ifndef CP5_ex7_36_h
#define CP5_ex7_36_h

#include <string>
#include<iostream>
#include<vector>

struct X
{
 /*   X (int i, int j):base(i),rem(base%j) {}
    int rem, base;
    初始化错误例如 X a(3,2);最终输出 rem=0,base=3

    */
    X (int i, int j):base(i),rem(base%j) {}
    int base,rem; //正确初始化例如 X a(3,2);最终输出 base=3，rem=1
};


#endif // CP5_ex7_36_h
