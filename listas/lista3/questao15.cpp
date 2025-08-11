#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   int k;
   cin >> s >> k;

   set<string> subs;
   for (int i = 0; i < s.size(); i++) {
       string current;
       for (int j = i; j < s.size() && j - i + 1 <= k; j++) {
           current += s[j];
           subs.insert(current);
           if (subs.size() > k) {
               subs.erase(--subs.end());
           }
       }
   }
   
   auto it = subs.begin();
   advance(it, k - 1);
   cout << *it << "\n";
   return 0;
}