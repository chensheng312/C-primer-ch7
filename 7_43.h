#ifndef CP5_ex7_43_h
#define CP5_ex7_43_h

#include <string>
#include<iostream>
#include<vector>

class NoDefault
{
public:
    NoDefault(int a);

};
class C
{
public:
    C():b(0); //bû��Ĭ�ϳ�ʼ��

private:
    NoDefault b;
};

#endif // CP5_ex7_43_h
