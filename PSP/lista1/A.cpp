#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, m;
   cin >> n >> m;
   vector<pair<int,int>> est (n);
   vector<pair<int,int>> check (m);
   for (int i = 0 ; i < n ; ++i){
    cin >> est[i].first >> est[i].second;
   }
   for (int j = 0 ; j < m ; ++j){
    cin >> check[j].first >> check[j].second;
   }
   for (int k = 0 ; k < n ; ++k){
    ll menor = LLONG_MAX;
    int index = -1;
    for (int l = 0 ; l < m ; ++l){
        ll dist = (abs(est[k].first - check[l].first) + abs(est[k].second - check[l].second));
        if (dist < menor){
            menor = dist;
            index = l + 1;
        }
    }
    cout << index << "\n";
   }
   return 0;
}