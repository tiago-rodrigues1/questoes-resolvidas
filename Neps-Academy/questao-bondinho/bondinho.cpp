#include <iostream>
#define max 50

using namespace std;

int main () {
    int A,M;

    cin >> A >> M;

    if (A + M > max) {
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }
    
}