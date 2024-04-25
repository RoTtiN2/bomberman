#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/component/animation.hpp>
#include <iostream>
#include <string>
#include <thread>
#include <experimental/random>
#include <list>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])

{
    list<string> textos;
    fstream imagen;
    imagen.open("./assets/imagen.txt");

    string linea;
    while (getline(imagen,linea))
    {
        textos.push_back(linea);
    }
    imagen.close();
}





{
    int fotograma = 0;
    string reset;
    int posX = 0;
    int posY = 0;
    while (true)

    {
        fotograma++;
        string = reset

        int r = std::experimental::randint(0, 255);
        int g = std::experimental::randint(0, 255);
        int b = std::experimental::randint(0, 255);

        Element personaje = spinner(21.3, fotograma);
        Decorator colorFondo = bgcolor(Color::RGB(r, g, b));
        Decorator colorTexto = color(Color::RGB(b, g, r));

        Element dibujo = border({hbox(personaje)}) | colorFondo | colorTexto;

        Dimensions Alto = Dimension::Fixed(10);
        Dimensions Ancho = Dimension::Full();

        Screen pantalla = Screen::Create(Ancho, Alto);
        Render(pantalla, dibujo);
        list<string> textos;
        textos.push_back("Primera linea");
        textos.push_back("Segunda linea");
        textos.push_back("Tercera linea");
        int 1 = 0;
        for(auto &&texto : textos)
        {
            int 1 = 0;
            for (auto &&letra : texto)
            {
                pantalla.PixelAt(posX + 1, posY + 1).character = letra;
                i++;
            }
            l++;
        }
        posX++;
        pantalla.PixelAt(posX, 6).character = "H";
        posX++;

        Render(pantalla, dibujo);

        Pantalla.Print();
        reset = Pantalla.ResetPosition();
        cout << reset;

        fotograma++;

        this thread::sleep_for(0.1s);
    }

    return 0;
}