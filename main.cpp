#include "Ave.h"
#include <conio.h>

int main() {
    cout << "\n*****Registro de Ave 1*****\n";
    Ave* aguila = new Ave();
    aguila->solicitar();
    aguila->mostrarResultados();
    aguila->comer();
    aguila->volar();

    cout << "\n*****Registro de Ave 2*****\n";
    Ave* gorrion = new Ave();
    gorrion->solicitar();
    gorrion->mostrarResultados();
    gorrion->comer();
    gorrion->volar();

    cout << "\n*****Registro de Ave 3*****\n";
    Ave* gaviota = new Ave();
    gaviota->solicitar();
    gaviota->mostrarResultados();
    gaviota->comer();
    gaviota->volar();

    delete aguila;
    delete gorrion;
    delete gaviota;

    getch();
    return 0;
}
