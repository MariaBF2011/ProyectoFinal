//María Araceli Barreto Figueroa A01753098
//Diego Alejandro Balderas Tlahuitzo A01745336

#include <iostream>
#include <string>
#include <vector>
#include "Cliente.h"
#include "Cuenta.h"
using namespace std;
class Mesa{

private:
vector <int> cantidad;
int numeroDeMesa{};
int cantidadDePersonas{};
string tamano{};
Cliente numero{};

public:
Mesa()= default;
int getCantidadDePersonas(){return cantidadDePersonas;}
int getNumeroDeMesa(){return numeroDeMesa;}
string getTamano(){return tamano;}


void setCantidadDePersonas(int cantidadDePersonas){
    this -> cantidadDePersonas = cantidadDePersonas;
}
void Recomendacion(int cantidadDePersonas){
    cout << "Contamos con 6 mesas (por el momento)" << endl;
    switch(cantidadDePersonas){
        case 1: 
            cout << "Te recomendamos las mesas 1 y 2 porque son de tamano pequeno" << endl;
            break;
        case 2:
            cout << "Te recomendamos las mesas 1 y 2 porque son de tamano pequeno" << endl;
            break;
        case 3:
            cout << "Te recomendamos las mesas 3 y 4 porque son de tamano mediano" << endl;
            break;
        case 4:
            cout << "Te recomendamos las mesas 3 y 4 porque son de tamano mediano" << endl;
            break;
        case 5:
            cout << "Te recomendamos las mesas 5 y 6 porque son de tamano grande"  << endl;
            break;
        case 6:
            cout << "Te recomendamos las mesas 5 y 6 porque son de tamano grande"  << endl;
            break;
    }
}
void setTamano(int numeroDeMesa){
    for (int i = 1; i<=6; i++){
    cantidad.push_back(i);
}
    for (int i = 0; i<cantidad.size(); i++){
        switch (cantidad[i]){
            case 1:
                tamano = "Pequena"; //1-2
                break;
            case 2:
                tamano = "Pequena";
                break;
            case 3:
                tamano = "Mediana";//3-5
                break;
            case 4:
                tamano = "Mediana";
                break;
            case 5:
                tamano = "Grande";//5+
                break;
            case 6:
                tamano = "Grande";
                break;            
        }
        if (numeroDeMesa == cantidad[i]){
            cout << "Usted ha elegido la mesa " << numeroDeMesa << " la cual es una mesa " << tamano << endl;
        }
    }
    
}

         
};

class Orden{
private:
    int tipoDeComida{};
    int cantidad{};
    string complementos{};
    string comida{};
    char continuar{'S'};
    vector <string> platillos;
    char eliminar{'N'};
    int persona{};
    float platilloE{};
    char continuar1{};
    string espacio{};
    string plato{};
public:
    Orden() = default;
    int getTipoDeComida(){return tipoDeComida;}
    int getCantidad(){return cantidad;}
    string getComplementos(){return complementos;}

    void setTipoDeComida(int tipoDeComida){this->tipoDeComida = tipoDeComida;}
    void setCantidad(int cantidad){this -> cantidad = cantidad;}
    void setComplementos(string complementos){this->complementos = complementos;}
    void seleccionar(int cantidadDePersonas){
    cout << " \nNuestro menú es el siguiente " << endl;
    cout << " \nEntradas "<< "\nCalamares" << "\nBoneless" << "\nCrema"<< endl;
    cout << " \nPlatos Fuertres " << "\nLasagna" << "\nSalmon" << "\nTacos"<< endl;
    cout << " \nPostres "<< "\nPay" << "\nHelado" << "\nTiramisu" << endl;
    for (int i = 1; i<=cantidadDePersonas; i++){
        cout << "Persona " << i << endl;
        while (true){
        cout << "Escoja un entrada: "; cin >> comida;
        if (comida == "Calamares" || comida == "Boneless" || comida == "Crema"){  
        platillos.push_back(comida);
        break;}
        else{
            cout << "Ingresa un platillo valido" << endl;            
        }
        } 
        while (true){
        cout << "Escoja un plato fuerte: "; cin >> comida;
        cin.ignore(32767, '\n');
        if (comida == "Lasagna" || comida == "Salmon" || comida == "Tacos"){  
        platillos.push_back(comida);
        break;}
        else{
            cout << "Ingresa un platillo valido" << endl;           
        }
        } 
        while (true){
        cout << "Escoja un postre: "; cin >> comida;
        cin.ignore(32767, '\n');
        if (comida == "Pay" || comida == "Helado" || comida == "Tiramisu"){  
        platillos.push_back(comida);
        break;}
        else{
            cout << "Ingresa un platillo valido" << endl;           
        }
        } 
         
    }
    cout << "Desea ingresar otro platillo ('S' Si  'N' no): "; cin >> continuar;
    while (continuar == 'S'){
    cout << "Elige tus platillos: "; cin >> comida;
    platillos.push_back(comida);
    cout << "Desea ingresar otro platillo ('S' Si  'N' no): "; cin >> continuar;
    };
} 
void quitar(){
 cout << "Desea eliminar algun platillo ('S' Si   'N' no): "; cin >> eliminar;
 while (eliminar == 'S'){
    for (int i=0; i<platillos.size(); i++){
    cout << platillos[i] << "\n"; 
    };
    cout << "Si desea eliminar el platillo(s) extra seleccione a la ultima persona y elija 3+ dependiendo del platillo que desee borrar" << endl;
    cout << "¿Cual es el numero de persona del cual quiere eliminar el platillo? "; cin >> persona;
    cout << "¿Que quiere eliminar? ('0' Entrada, '1' PlatoFuerte, '2' Postre: "; cin>>tipoDeComida;
    platilloE=((persona-1)*3)+tipoDeComida;
    platillos.erase(platillos.begin()+platilloE);
    cout << "Desea eliminar otro platillo ('S' Si   'N' no):"; cin >> eliminar;
 }
}
void registrar(){
    cout << "Los platillos que escogieron serían: "<<endl;
    for (int i=0; i<platillos.size(); i++){
    cout << platillos[i] << "\n"; 
    }

}
void pedir(){
 cout << "Escriba 'continuar' para seguir o cualquier letra si quiere cambiar: "; cin >> espacio;
 while (espacio != "continuar"){
    cout << "Desea hacer algun cambio: ('N' elegir nuevo platillo, 'Q' quitar algun platillo): "; cin >> continuar1;
    if (continuar1 == 'N'){
        continuar = 'S';
    while (continuar == 'S'){
    cout << "Elige tus platillos: "; cin >> comida;
    platillos.push_back(comida);
    cout << "Desea ingresar otro platillo ('S' Si  'N' no): "; cin >> continuar;
    }
    }
    else {
        quitar();
    }
    cout << "Si ya no quiere hacer cambios escriba 'continuar' "; cin >> espacio;
}

}
};

int main(){

    Cliente clt{};
    Mesa ms{};
    Orden rdn{};
    Cuenta cnt{};
    int personas{};
    int mesaS{};
        clt.Ingresar();
        personas = clt.getCantidadDePersonas();
        ms.setCantidadDePersonas(personas);
        cout <<"La cantidad de personas es: " << ms.getCantidadDePersonas() << endl;
        ms.Recomendacion(personas);
        mesaS = clt.elegir();
        ms.setTamano(mesaS);
        rdn.seleccionar(personas);
        rdn.quitar();
        rdn.pedir();
        rdn.registrar();
        cnt.setAlimentos();
        cnt.pagar();
        cnt.SeleccionDePago();
        cnt.pago();

    return 0;
}