// problem: https://codeforces.com/group/b3VQvMo3bt/contest/672468/problem/A
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
    
    // input
    int n; cin >> n;
    string s; cin >> s;

    // output
    int maxct = 0;
    int ct = 0;
    for(int i = 0; i < n-1; ++i)
    {
        if(s[i] == s[i+1]){
            ++ct;
        }else {
            maxct = max(maxct, ct);
            ct = 0;
        }
    }
    maxct = max(maxct, ct);
    
    if(maxct > 3)
        cout << "DIE";
    else
        cout << "BEAT";

    return 0;
}
