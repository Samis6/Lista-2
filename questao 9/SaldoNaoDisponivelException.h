#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>
#include <stdexcept>
#include <iostream>

class SaldoNaoDisponivelException: public std::runtime_error{
    public:
        SaldoNaoDisponivelException();
};

#endif //SALDONAODISPONIVELEXCEPTION_H

