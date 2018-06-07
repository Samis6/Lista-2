#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include <string>
#define MAX 10


using namespace std;

void ControleDeGastos::setDespesas(Despesa d){
  despesas[MAX] = d;
}

Despesa ControleDeGastos::getDespesas(){
  return despesas[MAX];
}

double ControleDeGastos::calculaTotalDeDespesas(){
  double total = 0;
  int j;

  for(j = 0; j < MAX; j++){
    total +=despesas[j].getValor();
    //cout << "O total de depesas e R$" << total;
  }

  return total;
}

bool ControleDeGastos::existeDespesaDoTipo(string t){
  int k;

  for(k = 0; k < MAX; k++){
    if(!despesas[k].getTipoDeGasto().compare(t)){
      cout << "1" << endl;
      return true;
    }
    cout << "0" << endl;
    return false;
  }
}
