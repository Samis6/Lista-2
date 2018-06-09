#include "Despesa.h"
#include "ControleDeGastos.h"
#include <iostream>
#include <string>
#define MAX 10


using namespace std;

//g++ SistemaDeControleDeGastosDeMesada.cpp ControleDeGastos.cpp Despesa.cpp

int main(){
  double vl;
  string tg;
  int sair;
  Despesa d;
  int i;
  ControleDeGastos c;


  cout << "     Sistema de controle de gastos de mesada" << endl;
  cout << endl;

  cout << "Iniciando" << endl;
  cout << "Adicione suas despesas: " << endl;

  cout << endl;

  for(i = 0; i < MAX; i++){
    cout << "   Despesa " << i << endl;

    cout << "Valor: " << endl;
    cin >> vl;

    d.setValor(vl);

    cout << "Tipo de gasto: " << endl;
    cin >> tg;

    d.setTipoDeGasto(tg);

  }

  c.calculaTotalDeDespesas();
  c.existeDespesaDoTipo(d.getTipoDeGasto());

  return 0;
}
