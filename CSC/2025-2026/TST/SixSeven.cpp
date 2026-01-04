// problem: https://codeforces.com/gym/648218/problem/B
// time complexity: o(n)
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
    string s; cin >> s;

    // algo
    int x = 0;
    for(int i = 0; i < s.length(); ++i)
    {
        if(48 <= s[i] && s[i] <= 57){
            ++x;
        }
    }

    // output
    cout << x;

    return 0;
}
