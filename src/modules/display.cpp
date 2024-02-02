#include <display.h>

Display::Display() :
    m_current_state(INFO), m_tab_count(0);
    {}


void Display::input(int increment, bool click)
{
    if (m_current_state == INFO)
    {
        if (click == 1)
        {
            this->to_menu();
        }
    }
}


void Display::to_menu()
{
    m_current_state = MENU;
    update();
}

void update()
{
    if (m_current_state == MENU)
    {
        for (int i = 0; i < m_tab_count; i++)
        {
            lcd.setCursor(0,i);
            lcd.print(tabs[i].name);
        }
    }


}