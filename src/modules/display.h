class Display
{
    public:
        void from_menu();
        void to_menu();
        void go_to();
        void to_tab();
        void from_tab();
    
    enum class states
    {
        INFO, MENU, TAB
    };
};