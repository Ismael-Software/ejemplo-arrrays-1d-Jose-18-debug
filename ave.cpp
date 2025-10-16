#include "Ave.h"
#include <conio.h>

Ave::Ave() {
    cout << "Hola, bienvenidos al area protegida de aves en Cuernavaca\n";
}

void Ave::solicitar() {
    cout << "\nQue ave es?: "; cin >> tipo;
    cout << "Cual es su nombre?: "; cin >> nombre;
    cout << "Color de sus plumas: "; cin >> color;
    cout << "Donde vive?: "; cin >> habitat;
    cout << "Vuela? (si/no): "; cin >> respuesta;
    vuela = (respuesta == "si" || respuesta == "SI");
    cout << "Cual es su peso?: "; cin >> peso;
    cout << "Cuantos anos tiene?: "; cin >> anio;
}

void Ave::comer() {
    cout << nombre << " esta comiendo gusanos\n";
}

void Ave::volar() {
    if (vuela)
        cout << nombre << " esta volando muy bien\n";
    else
        cout << nombre << " no puede volar, se murio\n";
}

void Ave::mostrarResultados() {
    cout << "\n********************Ave********************\n";
    cout << "Tipo: " << tipo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Color de plumas: " << color << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Vuela: " << (vuela ? "Si" : "No") << endl;
    cout << "Peso: " << peso << endl;
    cout << "Anos: " << anio << endl;
    cout << "*******************************************\n";
}

Ave::~Ave() {
    cout << "\nNo hay sistema\n";
}
