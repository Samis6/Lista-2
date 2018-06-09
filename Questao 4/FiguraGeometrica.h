#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;


class FiguraGeometrica
{
    public:

        void setNome(string);
        string getNome();

        virtual float Calcularea();

    protected:

    private:
        string nome;
};

#endif // FIGURAGEOMETRICA_H
