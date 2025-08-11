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
    vector<int> lista(n);
    for (int i = 0 ; i < n ; i++){
        cin >> lista[i];
    }
    vector<int> pre(n);
    vector<int> suf(n);
    pre[0] = lista[0];
    suf[n-1] = lista[n-1];
    for (int i = 1 ; i < n ; i++){
        pre[i] = min(pre[i-1], lista[i]);
    }
    for (int i = n-2 ; i >= 0 ; i--){
        suf[i] = max(suf[i+1], lista[i]);
    }
    set<int> res;
    res.insert(pre[n-1]);
    res.insert(suf[0]);
    for (int i = 0 ; i < n-1 ; i++){
        res.insert(pre[i]);
        res.insert(suf[i+1]);
    }
    string s = "";
    for (int i = 0 ; i < n ; i++){
        if (res.count(lista[i])) s += '1';
        else s += '0';
    }
    cout << s << "\n";
   }
   return 0;
}