#ifndef CP5_ex7_27_h
#define CP5_ex7_27_h

#include <string>
#include<iostream>


class Screen
{
public:
    using pos=std::string::size_type ;
    Screen()= default;
    Screen(pos ht,pos wd,char c): height(ht),width(wd),contents(ht*wd, c) { }

    Screen &set(char);
    Screen &set(pos ,pos ,char);

    char get( ) const
    {return contents[cursor];}
    char get(pos ht, pos wd) const;
    Screen &move(pos r,pos c);

    void some_member() const;

    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }

private:
    pos cursor=0;
    pos height=0,width=0;
    std::string contents;

    mutable size_t access_ctr;

    void do_display(std::ostream &os) const
    {
        os<<contents;
    }
};


inline Screen &Screen::move(pos r,pos c)
{
    pos row=r*width;
    cursor = row+c;
    return *this;
}
inline char Screen::get(pos r,pos c) const
{
    pos row=r*width;
    return contents[row+c];
}
inline Screen &Screen::set(char c)
{
    contents[cursor]=c;
    return *this;
}
inline Screen &Screen::set(pos r,pos col,char ch)
{
    contents[r*width+col]=ch;
    return *this;
}
void Screen::some_member() const
{
    ++access_ctr;
}

#endif // CP5_ex7_27_h