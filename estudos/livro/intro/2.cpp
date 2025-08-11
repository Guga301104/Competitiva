#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a ; i < b ; i++)

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   ll x = 0;
   REP(i, 1, n+1){
    x += i;
   }
   REP(i, 0, n-1){
    ll y; cin >> y;
    x -= y;
   }
   cout << x << "\n";
   return 0;
}