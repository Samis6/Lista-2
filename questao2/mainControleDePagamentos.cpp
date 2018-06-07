#include <iostream>
#include <string>
#include "Pagamento.h"
#include "ControleDePagamentos.h"
#define MAX 3

//g++ mainControleDePagamentos.cpp ControleDePagamentos.cpp Pagamento.cpp

int main(){

  Pagamento p = new pagamentos[MAX];

  pagamentos[0] = new Pagamento();
  pagamentos[0].setNomeDoFuncionario("Lucas");
  pagamentos[0].setValorPagamento(1235);

  pagamentos[1] = new Pagamento();
  pagamentos[1].setNomeDoFuncionario("Luiza");
  pagamentos[1].setValorPagamento(2345);

  pagamentos[2] = new Pagamento();
  pagamentos[2].setNomeDoFuncionario("Luis");
  pagamentos[2].setValorPagamento(3245);

  pagamentos.ControleDePagamentos(pagamentos.getValorPagamento());
  pagamentos.existePagamentoParaFuncionario(pagamentos.getNomeDoFuncionario());

  return 0;
}
