#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, cont = 0;
    cin >> x;
    cin >> y;
    if (x<y){
        for (int i = x ; i <= y ; i++){
            if (i%13 != 0) cont += i;
        }
    }
    else if (x>y){
        for (int i = y ; i <= x ; i++){
            if (i%13 != 0) cont += i;
        }
    }
    else if (x==y){
        if (x%13 != 0) cont += x;
    }
    cout << cont << endl;
    return 0;
}