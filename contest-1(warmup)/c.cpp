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
    int count = 0;
    string string;
    cin >> string;

    for (int i = 1; i < string.size(); i++)
    {
        if (string[i] == '|'){
            cout << count << " ";
            count = 0;
        }
        else {
            count ++;
        }
        
    }


    return 0;
}