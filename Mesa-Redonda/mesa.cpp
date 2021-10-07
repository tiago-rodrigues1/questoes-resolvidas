#include <iostream>

using namespace std;

int main () {
    int A, B, C, mesa[3]= {1,2,0};

    cin >> A >> B;

    int lugarAna = A % 3;
    int lugarBia = B % 3;

    if (lugarBia == lugarAna) {
        lugarBia = (B+1) % 3;
    }

    for (int i = 0; i < 3; i++) {
        if (lugarAna == mesa[i]) {
            mesa[i] = -1;
        }

        if (lugarBia == mesa[i]) {
            mesa[i] = -1;
        }
    }

   
    for (int i = 0; i < 3; i++) {
        if (mesa[i] != -1) {
            C = mesa[i];
        }
    }
    

    cout << C << endl;

     
}