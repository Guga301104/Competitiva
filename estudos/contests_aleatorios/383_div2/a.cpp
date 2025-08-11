#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int N;
   cin >> N;
    vector<int> S = {6,8,4,2};
    if (N==0) cout << 1 << endl;
    else cout << S[N%4] << endl;
    
   return 0;
}