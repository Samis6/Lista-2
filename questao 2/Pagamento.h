#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>
#include <string>


class Pagamento{
  private:
    double valorPagamento;
    std::string nomeDoFuncionario;
  public:
    double getValorPagamento();
    void setValorPagamento(double valorPagamento);

    std::string getNomeDoFuncionario();
    void setNomeDoFuncionario(std::string nomeDoFuncionario);
};

#endif // PAGAMENTO_H
