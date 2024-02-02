#include <LiquidCrystal_I2C.h>
#include <conts.h>

class Display
{
    public:
        Display();
        void add_tab(const Tab& tab);
        void input(int increment, bool click);
        void from_menu();
        void to_menu();
        void go_to();
        void to_tab();
        void from_tab();
        void update();
    
    enum class States
    {
        INFO, MENU, TAB
    };

    private:
        States m_current_state;
        Tab tab[TABS_COUNT];
        int m_tab_count;
        
};

class Tab
{
    public:
        char* name;
};