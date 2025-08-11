#include <bits/stdc++.h>
using namespace std;
int main() {
    float d;
    cin >> d;
    int x = d*100;
    cout << "NOTAS:" << endl;
    cout << x/10000 << " nota(s) de R$ 100.00" << endl;
    cout << (x%10000)/5000 << " nota(s) de R$ 50.00" << endl;
    cout << ((x%10000)%5000)/2000 << " nota(s) de R$ 20.00" << endl;
    cout << (((x%10000)%5000)%2000)/1000 << " nota(s) de R$ 10.00" << endl;
    cout << ((((x%10000)%5000)%2000)%1000)/500 << " nota(s) de R$ 5.00" << endl;
    cout << (((((x%10000)%5000)%2000)%1000)%500)/200 << " nota(s) de R$ 2.00" << endl;
    x = ((((((x%10000)%5000)%2000)%1000)%500)%200);
    cout << "MOEDAS:" << endl;
    cout << x/100 << " moeda(s) de R$ 1.00" << endl;
    cout << (x%100)/50 << " moeda(s) de R$ 0.50" << endl;
    cout << ((x%100)%50)/25 << " moeda(s) de R$ 0.25" << endl;
    cout << (((x%100)%50)%25)/10 << " moeda(s) de R$ 0.10" << endl;
    cout << ((((x%100)%50)%25)%10)/5 << " moeda(s) de R$ 0.05" << endl;
    cout << ((((x%100)%50)%25)%10)%5 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}