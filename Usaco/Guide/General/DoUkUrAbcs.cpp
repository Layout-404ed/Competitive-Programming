// problem: https://usaco.org/index.php?page=viewproblem2&cpid=1059
// time complexity: o(n!)
// i/o: stdio
#include "bits/stdc++.h"
#include <string>
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    v<int> a(7);
    for(int &i: a)
    {
        cin >>i;
    }

    // algo
    sort(a.begin(), a.end());
    v<int> sol = {
        a[0],
        a[1],
        a[a.size() - 1] - a[1] - a[0]
    };

    string s = "";
    for(int i: sol)
    {
        s += to_string(i) + ' ';
    }
    s.erase(s.end()-1);

    // output
    cout << s;

    return 0;
}
