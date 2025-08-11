#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a <= b && b <= c) || (c <= b && b <= a)) cout << b << endl;
    else if ((c <= a && a <= b) || (b <= a && a <= c)) cout << a << endl;
    else if ((a <= c && c <= b) || (b <= c && c <= a)) cout << c << endl;
    return 0;
}
