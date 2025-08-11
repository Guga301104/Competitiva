#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   while (n--){
    string s; cin >> s;
    int contA = 0, contB = 0;
    for (int i = 0 ; i < 5 ; i++){
        if (s[i] == 'A') contA ++;
        else if (s[i] == 'B') contB ++;
    }
    if (contA > contB) cout << "A\n";
    else cout << "B\n";
   }
   return 0;
}