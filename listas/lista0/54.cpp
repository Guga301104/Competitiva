#include <bits/stdc++.h>
using namespace std;
int main() {
    int f, o, l;
    cin >> f >> o >> l;
    f /= 2;
    o /= 3;
    l /= 5;
    if (f <= o && f <= l) cout << f << endl;
    else if (o <= f && o <= l) cout << o << endl;
    else if (l <= f && l <= o) cout << l << endl;
    return 0;
}