#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   map<string, int> dir;

   dir["norte"] = 0;
   dir["leste"] = 90;
   dir["sul"] = 180;
   dir["oeste"] = 270;
   
    string a, b;
    cin >> a >> b;

    int x = abs(dir[a] - dir[b]);
    int y = 360 - x;
    cout << min(x,y) << '\n';

   return 0;
}