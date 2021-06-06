#include <bits/stdc++.h>
using namespace std;

struct person
{
  string name;
  string country;
  int age;

  person(string n, string c, int a){
    name = n;
    country = c;
    age = a;
  }
  void hola(){
    cout << "Hola soy " << name << " y soy de " << country << '\n';
  }
};

int main() {

  person Matias("matías", "Chile", 19);
  Matias.hola();
  return 0;
}
