#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> tempo (n, 0);
    vector<int> adic (n, 0);
    for (int i = 0 ; i < n ; i++){
        int a, b;
        cin >> a >> b;
        tempo[i] = a;
        adic[i] = b;
    }
    int c =  adic[0];
    for (int j = 1 ; j < n ; j++){
        if (tempo[j] - tempo[j-1] >= c) c = adic[j];
        else c += adic[j] - (tempo[j] - tempo[j-1]);
    }
    cout << c << endl;
    return 0;
}