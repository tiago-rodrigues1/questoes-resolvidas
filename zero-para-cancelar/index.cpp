#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> nums;
    int n, soma = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        if (x == 0)
        {
            nums.pop();
        }
        else
        {
            nums.push(x);
        }
    }

    while (!nums.empty())
    {
        soma += nums.top();

        nums.pop();
    }

    cout << soma << endl;

    return 0;
}