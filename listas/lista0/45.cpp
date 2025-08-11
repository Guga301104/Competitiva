#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; ++i){
        string x;
        cin >> x;
        int a = x.length();
        int res = 1;
        for (int j = 0 ; j < a ; ++j){
            if (x[j] == 'a' || x[j] == 'A' || x[j] == '4' || x[j] == 'e' || x[j] == 'E' || x[j] == '3' || x[j] == 'i' || x[j] == 'I' || x[j] == '1' || x[j] == 'o' || x[j] == 'O' || x[j] == '0' || x[j] == 's' || x[j] == 'S' || x[j] == '5') res *= 3;
            else res*= 2;
        }
        cout << res << endl;
    }
    return 0;
}