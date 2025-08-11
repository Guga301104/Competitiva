#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, c = 1;
    cin >> l;
    while (l >= 2){
        l /= 2.0;
        c *= 4;
    }
    cout << c << endl;
    return 0;
}