#include <iostream>

using namespace std;

int main () {
	int m, a, b, otherSon;
    
    cin >> m >> a >> b;
    
    otherSon = m - (a+b); 

    cout <<  max(max(a, b), otherSon) << endl;
}