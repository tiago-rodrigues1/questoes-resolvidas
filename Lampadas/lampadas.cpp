#include <iostream>

using namespace std;

int main() {
    int I, N;
    bool A, B;

    A = false;
    B = false;

    cin >> N;

   
    for (int j = 0; j < N; j++) {
        cin >> I;

        if (I == 1) {
            A = !(A);
        }

        if (I == 2) {
            A = !(A);
            B = !(B);
        }
    }

    cout << A << endl << B << endl;
}