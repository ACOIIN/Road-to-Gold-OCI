#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int>::iterator it;

    cout << "Los elementos del vector son : ";
    for (it = ar.begin(); ptr < ar.end(); ptr++)
        cout << *it << " ";
    it = v.begin();
    // avanzamos el it 3
    advance(it, 3);
    cout << "Vector v en posicion 3" << *it << '\n';
    prev(it, 3);
    cout << "Vector v en posicion 0" << *it << '\n';

    it = v.find(10);
    if(it == v.end()){
      cout << "No está el 10\n";
    }
    // regresa primer iterador cuyo elemento no es menor que 10
    it = v.lower_bound(10);
    cout << "posición es " << it - v.begin() << '\n';
    cout << *it << '\n';

    // regresa primer iterador cuyo elemento es mayor que 10
    it = v.upper_bound(10);
    cout << "posición es " << it - v.begin() << '\n';
    cout << *it << '\n';

    return 0;
}
