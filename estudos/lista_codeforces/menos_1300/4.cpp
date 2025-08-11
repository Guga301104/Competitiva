#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   string x = "";
   for (int i = 0 ; i < s.size() ; i++){
    if (s[i] == '-' && s[i+1] == '-'){
        x += '2';
        i ++;
    } else if (s[i] == '-' && s[i+1] == '.'){
        x += '1';
        i ++;
    } else if (s[i] == '.') x += '0';
   }
   cout << x << "\n";
   return 0;
}