#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--){
    int n, x; cin >> n >> x;
    vector<int> res;
    for (int i = 0 ; i < n ; i++){
        if (i != x) res.push_back(i);
   }
   if (x < n) res.push_back(x);
   for (int i = 0 ; i < res.size() ; i++){
    cout << res[i] << (i == res.size()-1 ? "" : " ");
   }
   cout << "\n";
   }
   return 0;
}