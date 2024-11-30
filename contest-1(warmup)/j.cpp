#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endll '\n'
#define fIo                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main(){
    ll t;
    cin >> t;
    ll n, f, a, b;
    ll time;
    ll prev = 0;

    for (ll i = 0; i < t; i++){
        cin >> n >> f >> a >> b;
        prev = 0;
        for (ll j = 0; j < n; j++) {
            cin >> time;
            time = time - prev;
            prev += time;
            if ((time*a) > b){
                f -= b;
            }
            else{
                f -= (time*a);
            }
            if(f <= 0){
                cout << "NO" << endl;
                break;
            }
        }
        if(f > 0){
            cout << "YES" << endl;
        }
        prev = 0;
        
    }

    return 0;
}