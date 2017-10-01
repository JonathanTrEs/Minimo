
#include "MinimoP.h"

MinimoP::MinimoP(int n) : Problema::Problema() {
  _n = n;
  _ini = 0;
  _fin = _n - 1;
  _v = new int[_n];
  iniciarVector();
  _min = _v[0];
}

MinimoP::MinimoP(int n, int* v, int ini, int fin, int min) {
  _n = n;
  _v = v;
  _ini = ini;
  _fin = fin;
  _min = min;
}

MinimoP::~MinimoP() {

}

void MinimoP::iniciarVector() {
  cout << "Introduzca " << _n << " elementos del vector" << endl;
  for (int i = 0; i < _n; i++)
    cin >> _v[i];
}

bool MinimoP::isCasoMinimo() {
  return (_fin <= _ini);
}

pair<Problema*,Problema*> MinimoP::descomponer() {
  int med = (_fin + _ini)/2;
  if (_min > _v[med])
    _min = _v[med];
  pair<Problema*,Problema*> subProblemas;
  subProblemas.first = new MinimoP(_n, _v, _ini, med, _min);
  subProblemas.second = new MinimoP(_n, _v, med + 1, _fin, _min);
  return subProblemas;
}

void MinimoP::solver(Solucion* s) {
  if (_ini == _fin) {
    _min = _v[_ini];
  }
  ((MinimoS*)s)->setValor(_min);  
}