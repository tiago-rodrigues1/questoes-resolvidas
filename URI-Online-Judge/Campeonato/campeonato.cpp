#include <iostream>

using namespace std;

int main()
{
    int cv, ce, cs, PtsC;
    int fv, fe, fs, PtsF;
    char melhor;

    cin >> cv >> ce >> cs >> fv >> fe >> fs;

    cv *= 3;
    fv *= 3;

    ce *= 1;
    fe *= 1;

    PtsC = cv + ce;
    PtsF = fv + fe;

    if (PtsF < PtsC)
    {
        cout << "C" << endl;
    }
    else if (PtsC == PtsF)
    {
        if (cs == fs)
        {
            cout << "=" << endl;
        }
        else if (cs < fs)
        {
            cout << "F" << endl;
        }
        else
        {
            cout << "C" << endl;
        }
    }

    else
    {
        cout << "F" << endl;
    }
}