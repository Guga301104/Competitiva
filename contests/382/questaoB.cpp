#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
    int n, d, c = 0;
    string s;
    cin >> n >> d;
    cin >> s;
    for (int i = n-1 ; i >= 0 ; --i){
        if (c == d) break; 
        if (s[i] == '@'){
            s[i] = '.';
            c ++;
        }
    }
    cout << s << endl;

   return 0;
}