#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
    int n, d, c = 0;
    string s;
    cin >> n >> d;
    cin >> s;
    for (int i = 0 ; i < n ; ++i){
        if (s[i] == '.') c += 1;
    }
    c += d;
    if (c > n) cout << n << endl;
    else cout << c << endl;
   return 0;
}