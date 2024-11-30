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
    ll n , m, votes, winner;
    cin >> n >> m;
    vector<ll> candidates;

    for (ll i = 0; i < n; i++){
        candidates.push_back(0);
    }

    for (ll i = 0; i < m; i++){
        ll vote;
        cin >> vote;
        candidates[(vote - 1)] += 1;
        // cout << "i: " << i << endl;
        // cout << "candidates[vote]: " << candidates[vote] << endl;  

        if (i == 0){
            votes = 1;
            winner = vote;
        }

        for (ll h = 0; h < n; h++){          
            // cout << "h: " << h << endl;
            // cout << "Winner: " << winner << endl;  
            // cout << "candidates[h]: " << candidates[h] << endl;
            // cout << "Votes: " << votes << endl;
            if (candidates[h] > votes){
                votes = candidates[h];
                winner = h + 1;
                // cout << "Winnerrr: " << winner << endl;
            }
            else if (candidates[h] == votes){
                if (winner > h + 1 ){
                    votes = candidates[h];
                    winner = h + 1;
                    // cout << "Winner: " << winner << endl;
                }
            }
        }
        cout << winner << endl;
    }


    return 0;
}