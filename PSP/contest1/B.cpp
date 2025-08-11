#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> cont(n);
   iota(cont.begin(), cont.end(), 1);
   vector<int> res(n);
   for (int i = 0 ; i < n ; ++i){
    cin >> res[i];
   }
   sort(res.begin(), res.end());
   if (res == cont) cout << "Yes\n";
   else cout << "No\n";
   return 0;
}