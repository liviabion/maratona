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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        string tab;
        cin >> n >> tab;
        int coins = 0;
        int j = 0;

        while(true){
            if (j >= n - 1){
                break;
            }

            if (tab[(j + 1)] == '.'){
                if (j == n - 2){
                    break;
                }
                else{
                    if (tab[(j + 2)] == '*'){
                        j += 1;
                        continue;
                    }
                    else if (tab[(j + 2)] == '@'){
                        coins ++;
                        j += 2;
                        continue;
                    }
                    else if (tab[(j + 2)] == '.'){
                        j += 2;
                        continue;
                    }
                }
            }
            else if (tab[(j + 1)] == '@'){
                coins ++; 
                j += 1;
                continue;
            }
            else if (tab[(j + 1)] == '*'){
                if (j == n - 2){
                    break;
                }
                else{
                    if (tab[(j + 2)] == '*'){
                        break;
                    }
                    else if (tab[(j + 2)] == '@'){
                        coins ++;
                        j += 2;
                        continue;
                    }
                    else if (tab[(j + 2)] == '.'){
                        j += 2;
                        continue;
                    }
                }
            }
        }
        cout << coins << endl;
    }

    return 0;
}