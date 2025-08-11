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
   ll x = n;
   while (x != 1) {
    cout << x << " ";
    if (x % 2) {
        x *= 3;
        x += 1;
    }
    else x /= 2;
   }
   cout << x << "\n";
   return 0;
}