#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

unordered_map<int, string> fib_cache;

string fibonacci(int x){
    if (fib_cache.count(x)) return fib_cache[x];
    if (x == 1) return fib_cache[x] = "a";
    if (x == 2) return fib_cache[x] = "b";

    string a = fibonacci(x - 1);
    string b = fibonacci(x - 2);

    if (a.size() + b.size() > 3000)
        fib_cache[x] = a.substr(0, 1500) + b.substr(0, 1500);
    else
        fib_cache[x] = a + b;

    return fib_cache[x];
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int k, n;
   cin >> k >> n;

   fib_cache[1] = "a";
   fib_cache[2] = "b";

   string inicial = fibonacci(min(k, 30));

   while (n--){
    string s;
    cin >> s;
    int c = 0;
    size_t pos = inicial.find(s);
    while (pos != string::npos){
        c ++;
        pos = inicial.find(s, pos + 1);
    }
    cout << c << "\n";
   }
   return 0;
}