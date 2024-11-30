#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endll '\n'
#define fIo                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define pii pair<int, int>
#define pll pair<ll, ll>

int main(){
    ll n, lenght, soma, verificador = 0;
    cin >> n;
    vector<ll> tamanhos;

    for (ll i = 0; i < n; i++){
        cin >> lenght;
        tamanhos.push_back(lenght);
    }

    sort(tamanhos.begin(), tamanhos.end());

    for (ll i = 0; i < n - 2; i++){
        soma = tamanhos[i] + tamanhos[i + 1];
        if (soma > tamanhos[i +2]){
            cout << "YES" << endl;
            verificador ++;
            break;
        }
        
    }

    if(verificador == 0){
        cout << "NO" << endl;
    }

    return 0;
}