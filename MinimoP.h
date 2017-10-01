#ifndef MINIMOP_H_
#define MINIMOP_H_

#include "Problema.h"
#include "MinimoS.h"

class MinimoP: public Problema {
public:
  MinimoP(int);
  MinimoP(int n, int* v, int ini, int fin, int min);
  virtual ~MinimoP();
  
  bool isCasoMinimo();
  pair<Problema*,Problema*> descomponer();
  void solver(Solucion* s);
  
  void iniciarVector();
  
private:
  int _n;
  int* _v;
  int _ini;
  int _fin;
  int _min;
};

#endif /* MINIMOP_H_ */