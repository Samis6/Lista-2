#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

class Funcionario{
    private:
        std::string matricula;
        std::string nome;
        float salario;
    public:
        void setMatricula(std::string m);
        std::string getMatricula();

        void setNome(std::string n);
        std::string getNome();

        void setSalario(float s);
        virtual float getSalario();

};

#endif // FUNCIONARIO_H
