#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 1;
    vector<int> v;
    vector<int> z;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            c += 1;
        }
        else
        {
            z.push_back(c);
            c = 1;
        }
    }

    sort(z.begin(), z.end());

    cout << z[z.size() - 1] << "\n";

    return 0;
}