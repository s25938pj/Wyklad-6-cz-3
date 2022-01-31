#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::cerr;

struct engine
{
    string name;
    int capacity;
};

struct machine
{
    engine inner_engine;
    auto start()->void
    {
        cout <<"Engine started, prepare to go\n";
    }
};

struct race_car:machine //Dwukropek oznacza dziedziczenie w race car po machine
{
    engine inner_engine;
/*   auto start()->void
    {
        cout <<"Engine started, prepare to go\n";
   }
   */
    int number_of_wheels;
};

struct motorboat:machine //Dwukropek oznacza dziedziczenie w race car po machine
{
/*    engine inner_engine;
    auto start()->void
    {
        cout <<"Engine started, prepare to go\n";
    }
 */
    int number_of_sails;
};

struct base
{
private:
   string s1;
public:
    string s2;
};

struct derived : base
{
    string x;
};

struct button
{
    virtual auto click() -> void
    {
        cout << "Button clicked\n";
    }
};

auto click_buttons(button& b1, button& b2) -> void
{
    b1.click();
    b2.click();
}
struct special_button : button
{
    virtual auto click()->void
    {
        cout <<"BRIGHT COLORS ";
        cout <<"Button clicked\n";
    }
};
struct silent_button:button
{
    virtual auto click()->void
    {
        cout << "*silent* click *silent*\n";
    }
};
auto click_special_buttons(special_button b1, special_button b2) -> void
{
    b1.click();
    b2.click();
}

auto main() -> int
{
/*    auto car1 = race_car();
    car1.inner_engine.name = "jakhsduw9124";

    auto boat1 = motorboat();
    boat1.inner_engine.name = "asdhuwh1941";

    car1.start();
    boat1.start();

auto d = derived();
    //d.s1 = "s";
    d.s2 = "s";
    d.x = "X";
    */

    auto button1 = button();
    auto button2 = button();
    auto button3 = special_button();
    auto button4 = silent_button();
//    button3.click();
//    button1.click();
//    button2.click();

    click_buttons(button4, button3);

//click_buttons(button1, button3);
//click_special_buttons(button1, button2); //Nie ok, ponieważ zwykly button nie należy do special_buttons
//click_special_buttons(button3, button3); //OK

}
