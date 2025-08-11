#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, D, c = 0;
    cin >> H >> W >> D;
    char tab[H][W];
    vector<int> index (4);
    int maiorX = -1;
    for (int i = 0 ; i < H ; i++){
        for (int j = 0 ; j < W ; j++){
            char x;
            cin >> x;
            tab[i][j] = x;
        }
    }
    for (int i = 0 ; i < H ; i++){
        for (int j = 0 ; j < W ; j++){
            if (tab[i][j] == '.'){
                index[0] = i;
                index[1] = j;
                for (int k = i ; k < H ; k++){
                    for (int l = (k == i ? j+1 : 0) ; l < W ; l++){
                        if (tab[k][l] == '.'){
                            index[2] = k;
                            index[3] = l;
                            for (int m = 0 ; m < H ; m++){
                                for (int n = 0 ; n < W ; n++){
                                    if (tab[m][n] == '.'){
                                        if ((abs(index[0] - m) + abs(index[1] - n)) <= D || (abs(index[2] - m) + abs(index[3] - n)) <= D) c += 1; 
                                    }
                                }
                            }
                            if (c > maiorX) maiorX = c;
                            c = 0;
                            index[2] = 0;
                            index[3] = 0;
                        }
                    }
                }
                index[0] = 0;
                index[1] = 0;
            }
        }
    }
    printf("%d\n", maiorX);
    return 0;
}