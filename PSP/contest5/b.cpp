#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int h, w; cin >> h >> w;
   vector<vector<int>> A (h, vector<int>(w));
   for (int i = 0 ; i < h ; i++){
    for (int j = 0 ; j < w ; j++){
        cin >> A[i][j];
    }
   }
   for (int j = 0 ; j < w ; j++){
    for (int i = 0 ; i < h ; i++){
        cout << A[i][j] << " ";
    }
    cout << "\n";
   }
   return 0;
}