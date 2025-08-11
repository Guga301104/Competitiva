#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> lista(n);
    vector<int> maiores;
    for (int i = 0 ; i < n ; i++){
        cin >> lista[i];
    }
    for (int j = 0 ; j < n-1 ; j++){
        vector<int> valores;
        for (int k = j+1 ; k < n ; k++){
            int c = 1;
            if (lista[k] == lista[j]){
                int dist = k-j;
                for (int l = k; l < n ; l += dist){
                    if (lista[l] == lista[j]) c += 1;
                    else break;
                }
            }
            valores.push_back(c);
        }
        if (!valores.empty()){
            maiores.push_back(*max_element(valores.begin(), valores.end()));
        }
    }
    if(!maiores.empty()){
        int maior = *max_element(maiores.begin(), maiores.end());
        cout << maior << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}