#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x;
    vector<int> fila; 

    cin >> n;  

    for(int i = 0; i < n; i++) {
        int id;

        cin >> id;

        fila.push_back(id);
    }

    set<int> saiFila;

    cin >> m;
    
    for(int i = 0; i < m; i++) {
        int id;

        cin >> id;

        saiFila.insert(id);
    }

    for(int i = 0; i < n; i++) {
        if(saiFila.find(fila[i]) == saiFila.end()) {
            cout << fila[i] << " ";
        }
    }

    cout << endl;

    return 0;
}