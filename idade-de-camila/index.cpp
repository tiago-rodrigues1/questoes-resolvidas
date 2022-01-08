#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> idades(3);

    cin >> idades[0] >> idades[1] >> idades[2];

    sort(idades.begin(), idades.end());

    cout << idades[1] << endl;

    return 0;
}