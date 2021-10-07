#include <iostream>

using namespace std;

int n,t;

int h (int n) {
    if (n == 1) {
        return 1;
    } 

    return h(n-1)*2+1;
}

int main () {

    while (cin >> n && n) {
        cout << "Teste " << ++t << endl;
        cout << h(n) << endl << endl;
    }
    
}