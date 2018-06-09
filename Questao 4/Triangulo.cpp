#include "Triangulo.h"
#include "FiguraGeometrica.h"
#include <iostream>

using namespace std;

Triangulo::Triangulo(){}

Triangulo::Triangulo(string N, int bas, int alt){
    setNome(n);
    setBaset(Bas);
    setalturat(alt);
}

void Triangulo::setBaset(int Bas){
    setNome("Triangulo");

    if(Bas<=0){
        cout << "base invalida" << endl;
    }else{
        baset = Bas;
    }
}

int Triangulo::getbaset(){
    return baset;
}

void Triangulo::setalturat(int alt){
    if(alt <= 0){
        cout << "Altura invalida" << endl;
    }else{
        alturat=alt;
    }
}

int Triangulo::getalturat(){
    return alturat;
}

float Triangulo::Calcularea(){
    return ((baset *alturat)/2);
}
