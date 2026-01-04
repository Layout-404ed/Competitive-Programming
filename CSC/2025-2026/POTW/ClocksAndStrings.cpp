// problem: https://codeforces.com/group/61eWPWXekk/contest/652632/problem/D
// time complexity: O(n log(n))
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
    
    int t; cin >> t;
    while(t--)
    {
        // input
        int a, b, c, d; cin >> a >> b >> c >> d;

        // algo
        int a1 = min(a, b);
        int b1 = max(a, b);
        int c1 = min(c, d);
        int d1 = max(c, d);
        
        bool hasX1 = false;
        for(int i = a1; i != b1;)
        {
            if(i == c1 || i == d1){
                hasX1 = true;
                break;
            }
            if(i == 12) i = 1;
            else ++i;
        }
        
        bool hasX2 = false;
        for(int i = a1; i != b1;)
        {
            if(i == d1 || i == c1){
                hasX2 = true;
                break;
            }
            if(i == 1) i = 12;
            else --i;
        }

        // output
        if(hasX1 && hasX2) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
