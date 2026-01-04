// problem: https://calicojudge.com/team/problems/764/statement
// time complexity: o(n^3)
// i/o: main.in main.out
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // ifstream in("main.in");
    // ofstream out("main.out");
    int t; cin >> t;
    while(t--)
    {
        // input
        int n; cin >> n;
        string s; cin >> s;

        // algo
        int x = 0;
        int y = 1;
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == 'T'){
                x += y;
                y = 1;
            }else{
                y *= 2;
            }
        }

        // output
        cout << x << '\n';
    }

    // in.close();
    // out.close();

    return 0;
}
