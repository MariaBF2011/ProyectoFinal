//Codigo creado por María Araceli Barreto Figueroa A01753098

#ifndef Cuenta_C
#define Cuentaa_C
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cuenta{
    private:
    vector <string> alimentos;
    vector <float> precios;
    int alimento{};
    char formaDePago{};
    float cantidadIngresada{};
    float cantidadAPagar{};
    float cambio{};
    string platillo{};
    float costo{};
    float suma{};
    int i{};
    public:
        Cuenta() = default;
    char getformaDePago(){return formaDePago;}
    float getcantidadIngresada(){return cantidadIngresada;}
    float getcantidadAPagar(){return cantidadAPagar;}
    float getCambio(){return cambio;}

    void setFormaDePago(char formaDePago){this->formaDePago = formaDePago;}
    void setCantidadIngresada(float cantidadIngresada){this->cantidadIngresada = cantidadIngresada;}
    void setCantidadAPagar(float cantidadAPagar){this->cantidadAPagar = cantidadAPagar;}
    void setCambio(float cambio){this->cambio = cambio;} 
    void setAlimentos(){
        cout << "¿Cuantos platillos consumieron? "; cin >> alimento;
        while(i != alimento){
            cout <<"¿Que platillo? "; cin >> platillo;
            if (platillo == "Calamares"){
                costo = 260;
                i++;
                } 
            else if(platillo == "Boneless"){
                costo = 180; i++;
            }
            else if(platillo == "Crema"){
                costo = 68; i++;
            }
            else if(platillo == "Lasagna"){
                costo = 160; i++;
            }
            else if(platillo == "Salmon"){
                costo = 320; i++;
            }
            else if(platillo == "Tacos"){
                costo = 76; i++;
            }
            else if(platillo == "Pay"){
                costo = 75; i++;
            }
            else if(platillo == "Helado"){
                costo = 50; i++;
            }
            else if(platillo == "Tiramisu"){
                costo = 90; i++;
            }
            else{
                cout << "Ingrese un platillo correcto\n";
            }
            
            alimentos.push_back(platillo);
            precios.push_back(costo);
        }
    }
    void pagar(){
        cout << "Los precios de sus alimentos fueron: "<< endl;
        for (int i=0; i<alimentos.size(); i++){
        cout << alimentos[i] << ": " << precios[i]<< endl;
        cantidadAPagar = cantidadAPagar+precios[i];
    }   
        cout << "Lo cual deja un total de: " << cantidadAPagar << endl;
    }   
    void SeleccionDePago(){
        cout << "¿Como va a pagar? ('T' tarjeta, 'E', efectivo, 'A' atraves de alguna app): " ; cin >> formaDePago;
        switch(formaDePago){
            case 'T':
            cout << "Introduzca su tarejta"  << endl;
            break;
            case 'E':
            cout << "Recibo efectivo" << endl;
            break;
            case 'A':
            cout << "Cargando servicio" << endl;
        }
    }  
    void pago(){
        cout << "Ingrese el monto para pagar: "; cin >> cantidadIngresada;
        cambio = cantidadIngresada-cantidadAPagar;
        cout << "Su cambio fue de: $" << cambio << " vuelva pronto :D";
    }
};

#endif