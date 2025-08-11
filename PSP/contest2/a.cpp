#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   cin >> s;
   int cont = 1;
   sort (s.begin(), s.end());
   while (next_permutation(s.begin(), s.end())){
    cont ++;
   }
   cout << cont << "\n";
   return 0;
}
