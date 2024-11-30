#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endll '\n'
#define fIo                      \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    int count = 0;
    string palavra;

    for (int i = 0; i < 12; i++)
    {
        cin >> palavra;

        if (palavra.size() == i + 1)
        {
            count++;
        }
        
    }
    cout << count << endl;

    return 0;
}