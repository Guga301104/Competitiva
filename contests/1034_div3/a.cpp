#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   set<int> lista;
   while(t--){
    int n; cin >> n;
    int x = n%4;
    if (x != 0){
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
    }
   }
   return 0;
}