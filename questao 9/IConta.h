#ifndef ICONTA_H
#define ICONTA_H

class IConta{
  private:
    double valor;
  public:
    void setValor(double v);
    double getValor();

    virtual void depositar(double v) = 0;
    virtual void sacar(double v) = 0;
};

#endif // ICONTA_H
