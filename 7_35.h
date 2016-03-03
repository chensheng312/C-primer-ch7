#ifndef CP5_ex7_35_h
#define CP5_ex7_35_h

#include <string>
#include<iostream>
#include<vector>

/*typedef std::string Type;
Type initVal ();   //此时使用了此函数声明之前的typedef std::string Type;定义
class Exercise
{
public:
    typedef double Type;//在没有改声明之前的此类中使用Type，所以该声明是正确的
    Type setVal (Type);//用了此类中此条声明之前的定义 typedef double Type;
    Type initVal();//同上typedef double Type;
private:
    int val;
};
Type Exercise::setVal(Type parm) //函数定义出错，没有匹配的函数，第一个Type会出现二值歧义
{
    val=parm + initVal();  //在定义中 用到的外部函数需要定义
    return val;
}*/

//update
typedef std::string Type1;
Type1 initVal ();
class Exercise
{
public:
    typedef double Type;
    Type setVal (Type);
    Type initVal() {};
private:
    int val;
};
Exercise::Type Exercise::setVal(Type parm)
{
    val=parm + initVal();
    return val;
}


#endif // CP5_ex7_35_h
