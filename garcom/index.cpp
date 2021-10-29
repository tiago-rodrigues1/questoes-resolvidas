#include <iostream>

using namespace std;

int main () {
    int N, L, C, brokens;

    cin >> N;

    brokens = 0;

    while (N > 0) {
        cin >> L >> C;

        if (L > C) {
            brokens += C;
        }

        N--;
    }

    cout << brokens << endl;
}