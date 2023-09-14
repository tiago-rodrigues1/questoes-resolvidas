#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;

        cin >> s;

        int pos = s.find('!');

        int k = s.substr(pos).size();
        int n = stoi(s.substr(0, pos));

        int counter = 1;
        long r = n;

        while (n - (k * counter) >= 1) {
            r = r * (n - k * counter);
            counter++;
        }

        cout << r << "\n";
    }


    return 0;
}
