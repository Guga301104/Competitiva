#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, index = 0;
    vector<int> numeros;
    cin >> n >> a >> b;
    for (int i = 0 ; i < n ; ++i){
        int x;
        cin >> x;
        if (x == (a+b)) index = i;
    }
    cout << index + 1 << endl;
    return 0;
}