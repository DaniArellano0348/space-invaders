#include <iostream>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    auto ventana1 = Window({
        
    });
    auto ventanas = Container::Stacked({ventana1});

    auto pantalla = ScreenInteractive::Fullscreen();
    pantalla.Loop(ventanas);
    return 0;
}
