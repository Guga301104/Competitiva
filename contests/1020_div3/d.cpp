#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int>a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int>b(m+2);
        for(int i = 1; i <= m; i++) cin >> b[i];
        const int INF = n + 1;
        vector<int> pref(m+1, INF), suf(m+2, 0);
        pref[0] = 0;
        int j = 0;
        for(int i = 1; i <= m; i++){
            while(j < n && a[j] < b[i]) j++;
            if(j < n) pref[i] = ++j;
            else break;
        }
        if(pref[m] != INF){
            cout << 0 << "\n";
            continue;
        }
        suf[m+1] = n + 1;
        j = n - 1;
        for(int i = m; i >= 1; i--){
            while(j >= 0 && a[j] < b[i]) j--;
            if(j >= 0) suf[i] = --j + 2;
            else break;
        }
        int ans = INT_MAX;
        for(int i = 1; i <= m; i++){
            if(pref[i-1] < suf[i+1]){
                ans = min(ans, b[i]);
            }
        }
        if(ans == INT_MAX) cout << -1 << "\n";
        else cout << ans << "\n";
    }
   return 0;
}