#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, d;
   cin >> n >> d;
   vector<pair<int, int>> x;
   for (int i = 0 ; i < n ; i++){
    int t, l;
    cin >> t >> l;
    x.push_back(make_pair(t,l));
   }
   for (int k = 1 ; k <= d ; k++){
    int maior = 0;
    for (int j = 0 ; j < n ; j++){
        int peso = x[j].first * (x[j].second + k);
        if (peso > maior) maior = peso;
    }
    cout << maior << "\n";
   }
   return 0;
}