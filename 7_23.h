
#ifndef CP5_ex7_23_h
#define CP5_ex7_23_h

#include <string>
#include<iostream>


class Screen
{
public:
    using pos=std::string::size_type
    Screen()= default;
    Screen(pos ht,pos wd,char c): height(ht),width(wd),contents(ht*wd, c) { }
    char get( ) const
    {return contents[cursor];}
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r,pos c);

    void some_member() const;

private:
    pos cursor=0;
    pos height=0,width=0;
    std::string contents;

    mutable size_t access_ctr;
};

inline
Screen &Screen::move(pos r,pos c)
{
    pos row=r*width;
    cursor = row+c;
    return *this;
}
char Screen::get(pos ht,pos wd) const
{
    pos row=r*width;
    return contents[row+c];
}
Screen::some_member() const
{
    ++access_ctr;
}

#endif // CP5_ex7_23_h
