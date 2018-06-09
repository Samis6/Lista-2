#include "Despesa.h"
#include <iostream>

using namespace std;

void Despesa::setValor(double v){
  valor = v;
}

double Despesa::getValor(){
  return valor;
}

void Despesa::setTipoDeGasto(string t){
  tipoDeGasto = t;
}

string Despesa::getTipoDeGasto(){
  return tipoDeGasto;
}
