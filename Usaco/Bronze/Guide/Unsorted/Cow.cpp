// problem: https://usaco.org/index.php?page=viewproblem2&cpid=527
// time complexity: O(n log n)
// i/o: filio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    ifstream in("cow.in");
    ofstream out("cow.out");

    // input
    ll n; in >> n;
    string s; in >> s;

    // algo
    ll x = 0;
    for(ll i = 0; i < n; ++i)
    {
        if(s[i] == 'O'){
            ll c = 0;
            for(ll j = 0; j < i; ++j)
            {
                if(s[j] == 'C')
                    ++c;
            }
            ll w = 0;
            for(ll j = i + 1; j < n; ++j)
            {
                if(s[j] == 'W')
                    ++w;
            }
            x += c * w;
        }
    }

    // output
    out << x;

    in.close();
    out.close();


    return 0;
}
