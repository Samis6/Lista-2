#include "SaldoNaoDisponivelException.h"
#include <iostream>

using namespace std;

SaldoNaoDisponivelException::SaldoNaoDisponivelException(): runtime_error("O saque nao esta disponivel, pois o saque e insuficiente"){
  cout << endl;
}
