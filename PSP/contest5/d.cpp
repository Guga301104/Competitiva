#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   string s; cin >> s;
   vector<int> antes (n+1);
   vector<int> depois (n+1);
   antes[0] = 0;
   depois[0] = 0;
   for (int i = 1 ; i <= n ; i++){
    char c = s[i-1];
    if (c == 'L'){
        int p = antes[i-1];
        antes[i] = p;
        depois[i] = i-1;
        depois[p] = i;
        antes[i-1] = i;
    } else {
        int p = depois[i-1];
        antes[i] = i-1;
        depois[i] = p;
        antes[p] = i;
        depois[i-1] = i;
    }
   }

   for (int i = depois[0] ; i != 0 ; i = depois[i]){
    cout << i << " ";
   }
   cout << "0\n";
   return 0;
}
