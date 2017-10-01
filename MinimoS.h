#ifndef MINIMOS_H_
#define MINIMOS_H_

#include "Solucion.h"

class MinimoS: public Solucion {
public:
  MinimoS();
  virtual ~MinimoS();

  void resolver();
  void mezcla(pair<Solucion*,Solucion*>);
  Solucion* getInstance();

  void setValor(int);

private:
  int _n;  
  int* _v;
  int _min;
  
};

#endif /* MINIMOP_H_ */