#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   int k;
   cin >> s >> k;
   sort(s.begin(), s.end());
   for (int i = 0 ; i < k-1 ; i++){
    next_permutation(s.begin(), s.end());
   }
   cout << s << "\n";
   return 0;
}