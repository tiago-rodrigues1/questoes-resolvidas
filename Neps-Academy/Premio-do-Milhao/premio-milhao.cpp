#include <iostream>
using namespace std;

int main () {
    int N, A, days, aux;

    cin >> N >> A;

    aux = A;
    days = 1;

    while (N >= 0) {
        N--;

        if (aux < 1000000) {
            cin >> A;

            days+=1;
            aux += A;
        }

    }
    

    cout << days << endl;
}