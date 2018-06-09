#include "ControleDePagamentos.h"
#include <iostream>
#include <string>
#define MAX 3

using namespace std;

void ControleDePagamentos::setPagamentos(Pagamento pg[MAX]){
  pagamentos[MAX] = pg[MAX];
}

Pagamento ControleDePagamentos::getPagamentos(){
  return pagamentos[MAX];
}

double ControleDePagamentos::calculaTotaldePagamentos(){
  double total = 0;
  int i;

  for(i = 0; i < MAX; i++){
    total += pagamentos[i].getValorPagamento();
  }

  cout << total << endl;

  return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeDoFuncionario){
  int i;

  for(i = 0; i < MAX; i++){
    if(nomeDoFuncionario == pagamentos[i].getNomeDoFuncionario()){
      return true;
    }
  }

  return false;
}
