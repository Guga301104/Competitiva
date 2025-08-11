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
    int n; cin >> n;
    string s; cin >> s;
    vector<string> mat (n);
    for (int i = 0 ; i < n ; i++){
        string x = s;
        if (x[i] == '0') x[i] = '1';
        else x[i] = '0';
        mat[i] = x;
    }
    int cont = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if (mat[i][j] == '1') cont ++;
        }
    }
    cout << cont << "\n";
   }
   return 0;
}