#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include <iostream>
#include <string>
#include "Pagamento.h"
#define MAX 3

class ControleDePagamentos: public Pagamento{
  private:
    Pagamento pagamentos[MAX];
  public:
    Pagamento getPagamentos();
    void setPagamentos(Pagamento pg[MAX]);

    bool existePagamentoParaFuncionario(std::string nomeDoFuncionario);
    double calculaTotaldePagamentos();
};


#endif // CONTROLEDEPAGAMENTOS_H
