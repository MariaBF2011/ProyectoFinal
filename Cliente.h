//Codigo creado por Diego Alejandro Balderas Tlahuitzo A01745336

#ifndef Orden_C
#define Orden_C
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cliente{

private:
int tiempoDeEspera{};
int vecesQueHaVenido{};


public:
string nombre{};
int cantidadDePersonas{};
int mesaS{};
Cliente() = default;
int getTiempoDeEspera(){
    //relacion tiempo con las personas registradas
    return tiempoDeEspera;}
int getVeces(){return vecesQueHaVenido;}
string getNombre(){return nombre;}
int getCantidadDePersonas(){return cantidadDePersonas;}

void setVeces(int veces){this->vecesQueHaVenido = veces;}
void setNombre(string nombre){this->nombre = nombre;}
void setCantidadDePersonas(int cantidadDePersonas){this->cantidadDePersonas = cantidadDePersonas;}
void Ingresar(){
    cout << "Bienvenido a este Restaurante" << endl;
    cout << "Ingrese su nombre: "; cin >> nombre;
    cout << "Ingrese cuantas personas son (maximo 6 personas): "; cin >> cantidadDePersonas;
}
int elegir(){
    cout << "Seleccione su mesa (1-6): "; cin >> mesaS;
    return mesaS;
}
}; //fin clase

#endif