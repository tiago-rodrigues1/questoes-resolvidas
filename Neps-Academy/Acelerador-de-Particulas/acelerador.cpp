#include <iostream>

using namespace std;

int main () {
    int D, S;

    cin >> D;

    

    switch (D%8)
    {
    case 0:
        cout << 3 << endl;
        break;
    
    case 7:
        cout << 2 << endl;
        break;
    case 6: 
        cout << 1 << endl;
        break;
    }

    
}