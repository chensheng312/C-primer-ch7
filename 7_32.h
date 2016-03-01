#ifndef CP5_ex7_32_h
#define CP5_ex7_32_h

#include <string>
#include<iostream>
#include<vector>

class Screen;

class Window_mgr
{

public:
    using ScreenIndex = std::vector<Screen>::size_type;
    Window_mgr()= default;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens ;//{Screen(24,80,' ')};
};

class Screen
{
    friend void Window_mgr::clear(ScreenIndex);


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

inline void Window_mgr::clear(ScreenIndex i)
{
    Screen &s=screens[i];
    s.contents=std::string(s.height *s.width,' ');
}

#endif // CP5_ex7_32_h
