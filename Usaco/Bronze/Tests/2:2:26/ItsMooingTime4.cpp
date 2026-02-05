// problem: https://usaco.org/index.php?page=viewproblem&cpid=1553
// time complexity: O(n log n)
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t, k;
    cin >> t >> k;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        v<char> keys(n);
        bool flipped = false;
        bool possible = true;

        for (int i = n - 1; i >= 0; i--) {
            char target = s[i];
            char needed = flipped ? (target == 'M' ? 'O' : 'M') : target;

            if (needed == 'O') {
                keys[i] = 'O';
                flipped ^= 1;
            } else
                keys[i] = 'M';
        }

        if (!possible) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            if (k == 1) {
                for (char c : keys) cout << c;
                cout << "\n";
            }
        }
    }

    return 0;
}
