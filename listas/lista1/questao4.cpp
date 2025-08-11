#include <bits/stdc++.h>
using namespace std;
int main() {
    while(true){
        int x, temp;
        vector <int> resultados;
        cin >> x;
        temp = x;
        if (x == 0) break;
        cout << "Original number was " << x << endl;
        while (true){
            int dec = 0, cres = 0, dif;
            bool in = false;
            vector <int> digitos;
            while (temp > 0){
                digitos.push_back(temp % 10);
                temp /= 10;
            }
            sort(digitos.begin(), digitos.end());
            for (int i = 0 ; i < digitos.size() ; i++){
                cres += digitos[i];
                if (i != digitos.size() - 1) cres *= 10;
            }
            reverse(digitos.begin(), digitos.end());
            for (int j = 0 ; j < digitos.size() ; j++){
                dec += digitos[j];
                if (j != digitos.size() - 1) dec *= 10;
            }
            dif = dec - cres;
            for (int res : resultados){
                if (res == dif) in = true; 
            }
            cout << dec << " - " << cres << " = " << dif << endl;
            if (in){
                cout << "Chain length " << resultados.size() + 1 << endl;
                break;
            } else {
                resultados.push_back(dif);
                temp = dif;
            }
        }
    }
    return 0;
}