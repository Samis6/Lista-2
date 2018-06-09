#include "Conta.h"
#include "SaldoNaoDisponivelException.h"
#include <iostream>
#include <string>

using namespace std;

Conta::Conta(){
  setNomeCliente("");
  setSalarioMensal(0.0);
  setNumeroConta(0);
  setSaldo(0.0);
}

Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo){
  setNomeCliente(nomeCliente);
  setSalarioMensal(salarioMensal);
  setNumeroConta(numeroConta);
  setSaldo(saldo);
}

/*void IConta::setValor(double v){
  valor = v;
}

double IConta::getValor(){
  return valor;
}*/

void Conta::setNomeCliente(string nome){
  nomeCliente = nome;
}

string Conta::getNomeCliente(){
  return nomeCliente;
}

void Conta::setSalarioMensal(double sm){
    salarioMensal = sm;
}

double Conta::getSalarioMensal(){
  return salarioMensal;
}

void Conta::setSaldo(double s){
  saldo = s;
}

double Conta::getSaldo(){
  return saldo;
}

void Conta::setNumeroConta(int n){
  numeroConta = n;
}

int Conta::getNumeroConta(){
  return numeroConta;
}

void Conta::setLimite(double lim){
  limite = lim;
}

double Conta::getLimite(){
  return limite;
}

void Conta::depositar(double v){
    double s;
    s = getSaldo() + v;
    cout << "O valor do deposito foi R$" << v << endl;
    cout << "E o novo saldo e R$" << s << endl;
}

void Conta::sacar(double v){
    double s;
    
    if(s < v){
        throw SaldoNaoDisponivelException();
    } else {

    s = getSaldo()- v;
    cout << "O valor para retirada foi R$" << v << endl;
    cout << "E o novo saldo e R$" << s << endl;

    }
}

void Conta::definirlimite(double sm){
    double lim;
    setLimite(2 * sm);
    cout << "O limite da conta e R$" << getLimite();
}
