#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int fib[61], n;
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2 ; i < 61 ; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    cin >> n;
    for (int j = 0 ; j < n ; j++){
        int a;
        cin >> a;
        cout << "Fib(" << a << ") = " << fib[a] << endl;
    }
    return 0;
}