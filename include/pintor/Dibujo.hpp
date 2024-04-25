#include <string>
#include <list>
#include <vector.hpp>
using namespace;

class dibujo
{
private:
    list<string> lineas;
    vector posicion;
    vector velocidad;
public:
    dibujo() {}
    ~dibujo() {}
    void AgregarLinea(string linea){
        this->lineas.push_back(linea);
    }
    list<string> ObtenerLineas(){
        return this->lineas;
    }
};