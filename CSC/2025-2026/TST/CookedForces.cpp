/*
    IT WAS RECURSION ;-;
    LEARN RECURSIVE AGAIN
*/
// problem: https://codeforces.com/gym/648218/problem/E
// time complexity: o(n^5)
// i/o: 
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

    // algo //
    
    int x = pow(3, n);
    

    // output
    cout << x;


    return 0;
}
