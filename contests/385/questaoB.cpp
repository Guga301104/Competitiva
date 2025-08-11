#include <bits/stdc++.h>
using namespace std;
int main() {
    int h, w, x, y, k = 0, c = 0;   
    cin >> h >> w >> x >> y;
    char tab[h][w];
    for (int i = 0 ; i < h ; i++){
        for (int j = 0 ; j < w ; j++){
            cin >> tab[i][j];
        }
    }
    string t;
    cin >> t;
    vector <pair<int, int>> passed(t.size() + 1);
    int startX = x-1, startY = y-1;
    while (k < t.size()){
        bool ok = true;
        if (t[k] == 'L'){
            if (tab[startX][startY - 1] != '#'){
                startY -= 1;
            }
        }
        else if (t[k] == 'R'){
            if (tab[startX][startY + 1] != '#'){
                startY += 1;
            }
        }
        else if (t[k] == 'U'){
            if (tab[startX - 1][startY] != '#'){
                startX -= 1;
            }
        }
        else if (t[k] == 'D'){
            if (tab[startX + 1][startY] != '#'){
                startX += 1;
            }
        }
        if (tab[startX][startY] == '@'){
            for (int l = 0 ; l < passed.size() ; l++){
                if (startX == passed[l].first && startY == passed[l].second){
                    ok = false;
                }
            }
            if(ok){
                c += 1;
                passed.push_back(make_pair(startX, startY));
            }
        }
        k ++;
    }
    printf("%d %d %d\n", startX + 1, startY + 1, c);
    return 0;
}