#ifndef Ave_h
#define Ave_h

#include <iostream>
#include <string>

using namespace std;

class Ave {
public:
    string tipo, nombre, color, habitat, respuesta;
    bool vuela;
    float peso;
    int anio;

    Ave();
    void solicitar();
    void comer();
    void volar();
    void mostrarResultados();
    ~Ave();
};

#endif
