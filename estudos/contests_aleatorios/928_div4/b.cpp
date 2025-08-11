#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while (t--){
    int n; cin >> n;
    vector<string> mat (n);
    vector<int> ind (n, 0);
    for (int i = 0 ; i < n ; i++){
        cin >> mat[i];
        for (int j = 0 ; j < n ; j++){
            if (mat[i][j] == '1') ind[i] ++;
        }
    }
    set<int>rep;
    for (int i = 0 ; i < n ; i++){
        rep.insert(ind[i]);
    }
    if (rep.size() > 2) cout << "TRIANGLE\n";
    else cout << "SQUARE\n";
   }
   return 0;
}