#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   map <char, int> hist1;
   map <char, int> hist2;
   string s1; cin >> s1;
   string s2; cin >> s2;
   string s3; cin >> s3;
   for (int i = 0 ; i < s1.size() ; i++){
    hist1[s1[i]] ++;
   }
   for (int i = 0 ; i < s2.size() ; i++){
    hist1[s2[i]] ++;
   }
   for (int i = 0 ; i < s3.size() ; i++){
    hist2[s3[i]] ++;
   }
   if (hist1 == hist2) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}