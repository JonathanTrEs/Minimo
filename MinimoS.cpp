
#include "MinimoS.h"

MinimoS::MinimoS() : Solucion::Solucion() {
}

MinimoS::~MinimoS() {
}

void MinimoS::resolver() {
  cout << _min << endl;
}

void MinimoS::mezcla(pair<Solucion*,Solucion*> subSoluciones) {
  int min1 = (((MinimoS*)subSoluciones.first))->_min;
  int min2 = ((MinimoS*)subSoluciones.second)->_min;
  if (min1 < min2)
    _min = min1;
  else
    _min = min2;
}

Solucion* MinimoS::getInstance() {
  return new MinimoS();
}

void MinimoS::setValor(int min) {
  _min = min;
}