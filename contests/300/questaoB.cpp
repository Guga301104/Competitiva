#include <bits/stdc++.h>
using namespace std;
int main() {
    int lin, col;
    cin >> lin >> col;
    char A[lin][col];
    char B[lin][col];
    for (int i = 0 ; i < lin ; ++i){
        for (int j = 0 ; j < col ; ++j){
            char x;
            cin >> x;
            A[i][j] = x;
        }
    }
    for (int i = 0 ; i < lin ; ++i){
        for (int j = 0 ; j < col ; ++j){
            char y;
            cin >> y;
            B[i][j] = y;
        }
    }
    
    return 0;
}