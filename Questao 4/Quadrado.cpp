#include "Quadrado.h"
#include "FiguraGeometrica.h"
#include <iostream>

using namespace std;

Quadrado::Quadrado(){}

Quadrado::Quadrado(string N, int bas, int alt){
    setNome(n);
    setBaset(Bas);
    setalturat(alt);
}

void Quadrado::setBaset(int Bas){
    setNome("Quadrado");

    if(Bas<=0){
        cout << "base invalida" << endl;
    }else{
        baset = Bas;
    }
}

int Quadrado::getbaset(){
    return baset;
}

void Quadrado::setalturat(int alt){
    if(alt <= 0){
        cout << "Altura invalida" << endl;
    }else{
        alturat=alt;
    }
}

int Quadrado::getalturat(){
    return alturat;
}

float Quadrado::Calcularea(){
    return (baset *alturat);
}
