#ifndef CP5_ex7_35_h
#define CP5_ex7_35_h

#include <string>
#include<iostream>
#include<vector>

/*typedef std::string Type;
Type initVal ();   //��ʱʹ���˴˺�������֮ǰ��typedef std::string Type;����
class Exercise
{
public:
    typedef double Type;//��û�и�����֮ǰ�Ĵ�����ʹ��Type�����Ը���������ȷ��
    Type setVal (Type);//���˴����д�������֮ǰ�Ķ��� typedef double Type;
    Type initVal();//ͬ��typedef double Type;
private:
    int val;
};
Type Exercise::setVal(Type parm) //�����������û��ƥ��ĺ�������һ��Type����ֶ�ֵ����
{
    val=parm + initVal();  //�ڶ����� �õ����ⲿ������Ҫ����
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
