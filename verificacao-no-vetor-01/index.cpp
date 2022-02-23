/* Implementação usando busca binária */

#include <bits/stdc++.h>

using namespace std;

vector<int> v1, v2;

int arrayContains(int target)
{
    int min = 0, max = v1.size() - 1;

    while (true)
    {
        if (min > max)
        {
            return 0;
            break;
        }
        else
        {
            int guess = floor((max + min) / 2);

            if (v1[guess] == target)
            {
                return 1;
                break;
            }
            else if (v1[guess] < target)
            {
                min = guess + 1;
            }
            else if (v1[guess] > target)
            {
                max = guess - 1;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;

        v1.push_back(l);
    }

    sort(v1.begin(), v1.end());

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        v2.push_back(x);
    }

    for (int x : v2)
    {
        string msg = arrayContains(x) ? "Sim" : "Nao";
        cout << msg << "\n";
    }

    return 0;
}
