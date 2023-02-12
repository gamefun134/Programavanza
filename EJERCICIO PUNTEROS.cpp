#include <iostream>
using namespace std;
int main() {
  float vector[3]={2.0,3.0,1.0};
  float *pvector;

  for(int i=0;i<3;i++){
    pvector=&vector[i];

    cout<<"El valor del vector en la posicion "<<i<<" es: "<<vector[i]<<endl;

    cout<<"Valor del vector accedido desde el puntero "<<*pvector<<endl;

    cout<<"El valor en la memoria es: "<<&vector[i]<<endl;
  }
} 