#include <bits/stdc++.h>
using namespace std;

vector<int> alfabeto;
vector<pair<int, int>> vogais;

string p;
vector<char> ans;

bool isvogal(int i)
{
    if (i == 'a' - 'a' || i == 'e' - 'a' || i == 'i' - 'a' || i == 'o' - 'a' || i == 'u' - 'a')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    for (int i = 0; i < 26; i++)
    {
        if (i == 'w' - 'a' || i == 'y' - 'a')
        {
            continue;
        }

        alfabeto.push_back(i);

        if (isvogal(i))
        {
            vogais.push_back({alfabeto.size() - 1, i});
        }
    }

    cin >> p;

    for (int i = 0; i < p.size(); i++)
    {
        if (isvogal(p[i] - 'a'))
        {
            ans.push_back(p[i]);
            continue;
        }

        ans.push_back(p[i]);

        int id;

        for (int j = 0; j < alfabeto.size(); j++)
        {
            if (alfabeto[j] == p[i] - 'a')
            {
                id = j;
            }
        }

        int idDireita = 500, idEsquerda = -500;
        for (int j = id; j >= 0; j--)
        {
            if (isvogal(alfabeto[j]))
            {
                idEsquerda = j;
                break;
            }
        }

        for (int j = id; j < alfabeto.size(); j++)
        {
            if (isvogal(alfabeto[j]))
            {
                idDireita = j;
                break;
            }
        }

        if (id - idEsquerda <= idDireita - id)
        {
            ans.push_back('a' + alfabeto[idEsquerda]);
        }
        else
        {
            ans.push_back('a' + alfabeto[idDireita]);
        }

        if (id == alfabeto.size() - 1)
        {
            ans.push_back(p[i]);
        }
        else
        {
            for (int j = id + 1; j < alfabeto.size(); j++)
            {
                if (!isvogal(alfabeto[j]))
                {
                    ans.push_back('a' + alfabeto[j]);
                    break;
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}