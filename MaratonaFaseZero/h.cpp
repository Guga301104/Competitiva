#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

string fazPal(const string &esq, int n){
    string t = esq;
    int x = n/2;
    string rev = esq.substr(0, x);
    reverse(rev.begin(), rev.end());
    t += rev;
    return t;
}

ll binToLL(const string &s) {
    ll v = 0;
    for (char c : s) {
        v = (v << 1) | (c - '0');
    }
    return v;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll x; cin >> x;
   string s = bitset<64>(x).to_string();
   s = s.substr(s.find('1'));
   int n = s.size();
   string esq = s.substr(0, (n+1)/2);
   string pal = fazPal(esq, n);
   if (pal <= s){
    cout << binToLL(pal) << "\n";
    return 0;
   }
   int m = esq.size();
   int i = m - 1;
   while (i >= 0 && esq[i] == '0') {
    esq[i] = '1';
    i --;
   }
   if (i > 0) {
    esq[i] = '0';
    pal = fazPal(esq, n);
    cout << binToLL(pal) << "\n";
   } else {
    cout << ((1LL << (n-1)) - 1) << "\n";
   }
   return 0;
}