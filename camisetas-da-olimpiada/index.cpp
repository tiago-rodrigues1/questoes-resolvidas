#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, quantP = 0, quantM = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;

        cin >> t;

        if (t == 1)
        {
            quantP++;
        }
        else if (t == 2)
        {
            quantM++;
        }
    }

    int p, m;

    cin >> p >> m;

    if (p == quantP && m == quantM)
    {
        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }

    return 0;
}
