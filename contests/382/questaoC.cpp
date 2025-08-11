#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define vi vector<int>

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
    int n, m;
    cin >> n >> m;
    vector<int> a (n+1);
    vector<int> b (m+1);
    for (int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    for (int j = 1 ; j <= m ; ++j){
        cin >> b[j];
    }
    int maior = *max_element(b.begin() + 1, b.end());
    vector<int> h (maior + 1, -1);
    int sobra = maior;
    for (int k = 1 ; k <= n ; ++k){
        int g = a[k];
        if (g <= maior){
            for (int d = g ; d <= maior ; ++d){
                h[d] = k;
            }
            maior = g-1;
        }
        if (maior <= 0) break;
    }
    for (int l = 1 ; l <= m ; ++l){
        cout << h[b[l]] << endl;
    }

   return 0;
}