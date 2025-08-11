#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
    int N, D, A;
    cin >> N >> D >> A;

    int dist1 = D - A;
    if (dist1 < 0) dist1 += N;

    cout << dist1 << endl;

   return 0;
}