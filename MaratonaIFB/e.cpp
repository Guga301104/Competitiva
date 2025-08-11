#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   vector<int> A(n);
   vector<int> B(m);
   set<int> res;
   for (int i = 0 ; i < n ; i++){
    cin >> A[i];
    res.insert(A[i]);
   }
   for (int i = 0 ; i < m ; i++){
    cin >> B[i];
    res.insert(B[i]);
   }
   for (auto x : res){
    cout << x << " ";
   }
   cout << "\n";
   return 0;
}