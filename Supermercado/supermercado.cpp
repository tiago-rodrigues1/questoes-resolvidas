#include <iostream>

using namespace std;

int main () {
    int n,g;
    double precoPorQuilo[100],p, menorPreco;

    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p >> g;

        precoPorQuilo[i] = (p/g) * 1000;
    }

    menorPreco = precoPorQuilo[0];

    for (int i = 0; i < n; i++) {
        if (precoPorQuilo[i] < menorPreco) {
            menorPreco = precoPorQuilo[i];
        }
    }    

   cout << menorPreco << endl;
}