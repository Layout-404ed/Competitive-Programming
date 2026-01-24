// problem: https://open.kattis.com/problems/basketballoneonone
// time complexity: ???
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
    char c = s[s.length()-2];

    // output
    cout << c;

    return 0;
}
