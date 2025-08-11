#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, c = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0 ; i < n-1 ; i++){
        if ((s[i] == 'R' && s[i+1] == 'R') || (s[i] == 'G' && s[i+1] == 'G') || (s[i] == 'B' && s[i+1] == 'B')) c += 1;
    }
    cout << c << endl;
    return 0;
}