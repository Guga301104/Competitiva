#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int fib[N];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = fib[0] + fib[1];
    if (N == 0) cout << fib[0];
    else if (N == 1) cout << fib[0] << " " << fib[1];
    else if (N == 2) cout << fib[0] << " " << fib[1] << " " << fib[2];
    else{
        for (int i = 2 ; i < N ; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        for (int j = 0 ; j < N-1 ; j++){
            cout << fib[j] << " ";
        }
    }
    cout << fib[N-1];
    cout << endl;
    return 0;
}