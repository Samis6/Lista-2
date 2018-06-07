#include "Pagamento.h"
#include <iostream>
#include <string>

double Pagamento::getValorPagamento(){
  return valorPagamento;
}

std::string Pagamento::getNomeDoFuncionario(){
  return nomeDoFuncionario;
}

void Pagamento::setValorPagamento(double valorPagamento){
  this->valorPagamento = valorPagamento;
}

void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
  this->nomeDoFuncionario = nomeDoFuncionario;
}
