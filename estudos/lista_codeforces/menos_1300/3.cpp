#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, t; cin >> n >> t;
   string s; cin >> s;
   for (int j = 0 ; j < t ; j++){
    for (int i = 0 ; i < n-1 ; i++){
     if (s[i] == 'B' && s[i+1] == 'G'){
         s[i] = 'G';
         s[i+1] = 'B';
         i++;
     }
    }
   }
   cout << s << "\n";
   return 0;
}