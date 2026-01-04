// problem: https://usaco.org/index.php?page=viewproblem2&cpid=567
// time complexity: O(n^3)
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
    
    // input
    ifstream in("paint.in");
    int a, b, c, d; in >> a >> b >> c >> d;
    in.close();

    // algo
    int x = b - a + d - c;

    //* INTERSECTION FORMULA: max(min(b,d) - max(a, c), 0)
    x -= max(min(b,d) - max(a, c), 0);

    // output
    ofstream out("paint.out");
    out << x;
    out.close();

    return 0;
}
