#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"

using namespace std;


Circulo::Circulo(){}

Circulo::Circulo(string n, int R){
    setNome(n);
    setRaio(R);
}

void Circulo::setRaio(int R){

    setNome("Circulo");

    if(r<=0){
        cout << "Raio invalido" << endl;
    }else{
        raio=R;
    }
}

int Circulo::getRaio(){
    return raio;
}

float Circulo::getPI(){
    return pi;
}

float Circulo::Calcularea(){
    return pi*(raio*raio);
}
