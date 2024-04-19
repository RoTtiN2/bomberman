#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/component/animation.hpp>
#include <iostream>
#include <string>
#include <thread>
#include <experimental/random>
using namespace std;
using namespace ftxui;


int main(int argc, char const *argv[])

{
    int fotograma = 0;
    string reset;
    while (true)

    {
    fotograma++;

    int r =    std::experimental::randit(0, 255);
    int g =    std::experimental::randit(0, 255);
    int b =    std::experimental::randit(0, 255);

    Element personaje = spinner(21.3,   fotograma);

    Decorator colorFondo    =   bgcolor(Color::DarkGreen);
    Decorator colorTexto    =   color(Color::DarkGreen);

    Element dibujo = border({
            hbox(personaje) |   colorFondo  |   colorTexto
    });

    Dimensions Alto = Dimension::Fixed(10);
    Dimensions Ancho = Dimension::Full();

    Screen pantalla = Screen::Create(Ancho, Alto);

    Render(pantalla,    dibujo);
    Pantalla.Print();
    reset   =   Pantalla.ResetPosition();
    cout    << reset;

    fotograma++;

    this thread::sleep_for(0.1s);    
}

    return 0;
}