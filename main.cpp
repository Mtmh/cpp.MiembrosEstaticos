#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double salario;
    static string videojuego;// Es un grupo si modoficas, Modificas Todo
};

string Persona::videojuego = "Crash Bandicoot";


int main()
{
    Persona juan, luis;

    juan.nombre = "Juan";
    juan.edad = 30;
    juan.salario = 500.0;

    luis.nombre = "Luis";
    luis.edad = 30;
    luis.salario = 600.0;


    cout << luis.videojuego << endl;
    cout << juan.videojuego << endl;

    luis.videojuego = "Mario64";
    cout << luis.videojuego << endl;
    cout << juan.videojuego << endl;

    cout << "Si lo haces Estatico comparte todo" << endl;


    return 0;
}
