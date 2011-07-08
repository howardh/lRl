#include <iostream>
#include <curses.h>

using namespace std;

int main()
{
    char c;

    initscr();
    while (true)
    {
        switch (c = getch())
        {
            case 'a':
                std::cout<<"Left"<<std::endl;
                break;
            case 's':
                std::cout<<"Down"<<std::endl;
                break;
            case 'd':
                std::cout<<"Right"<<std::endl;
                break;
            case 'w':
                std::cout<<"Up"<<std::endl;
                break;
        }
    }
    endwin();
    return 0;
}
