// problem: https://codeforces.com/group/61eWPWXekk/contest/652632/problem/E
// time complexity: O(n)
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
        int n; cin >> n;
        string s; cin >> s;

        // algo
        pair<int, int> ai;
        ai.first = s.find('a');
        ai.second = s.rfind('a');
        int ax = 0;
        int bx = 0;
        for(int i = ai.first; i < ai.second; ++i)
        {
            if(s[i] == 'a') ++ax;
            else if(s[i] == 'b') ++bx;
        }

        pair<int, int> bi;
        bi.first = s.find('b');
        bi.second = s.rfind('b');
        int ax2 = 0;
        int bx2 = 0;
        for(int i = bi.first; i < bi.second; ++i)
        {
            if(s[i] == 'a') ++ax2;
            else if(s[i] == 'b') ++bx2;
        }

        // output
        cout << min(min(ax, bx), min(ax2, bx2)) << '\n';
    }
    
    return 0;
}
