#ifndef CONTA_H
#define  CONTA_H

#include "IConta.h"
#include <iostream>

class Conta: public IConta{
  private:
    //double valor;
    std::string nomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
    double limite;
  public:
    Conta();
    Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);

    /*void setValor(double v);
    double getValor();*/

    void setNomeCliente(std::string nome);
    std::string getNomeCliente();

    void setSalarioMensal(double sm);
    double getSalarioMensal();

    void setNumeroConta(int num);
    int getNumeroConta();

    void setSaldo(double s);
    double getSaldo();

    void setLimite(double lim);
    double getLimite();

    virtual void depositar(double v);
    virtual void sacar(double v);

    void definirlimite(double sm);
};

#endif // CONTA_H
