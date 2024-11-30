#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endll '\n'
#define fIo                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define pii pair<int, int>
#define pll pair<ll, ll>

int main()
{
    ll n;
    ll count = 0;
    ll prev;
    ll curr;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {   
        if (i == 0){
            cin >> curr;
            continue;
        }
        prev = curr;
        cin >> curr;

        if (prev > curr){
            count += prev - curr;
            curr = prev;
        }
    }
    cout << count << endl;

    return 0;
}