#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        int i = 0, j = 0;
        bool ok = true;
        while (i < p.size() && j < s.size()) {
            if (p[i] != s[j]) {
                ok = false;
                break;
            }
            int countP = 1;
            while (i + countP < p.size() && p[i + countP] == p[i]) countP++;
            int countS = 1;
            while (j + countS < s.size() && s[j + countS] == s[j]) countS++;
            if (countS < countP || countS > 2 * countP) {
                ok = false;
                break;
            }
            i += countP;
            j += countS;
        }
        if (i != p.size() || j != s.size())
            ok = false;
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}