#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s1, s2; cin >> s1 >> s2;
   for (int i = 0 ; i < s1.size() ; i++){
    int x1 = tolower(s1[i])-'0', x2 = tolower(s2[i])-'0';
    if (x1 < x2){
        cout << "-1\n";
        return 0;
    } else if (x2 < x1){
        cout << "1\n";
        return 0;
    }
   }
   cout << "0\n";
   return 0;
}