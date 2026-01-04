// problem: https://usaco.org/index.php?page=viewproblem2&cpid=713
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
    ifstream input("cowqueue.in");
    int n; input >> n;
    vector<pair<int, int>> a(n);
    for(pair<int, int> &x: a)
    {
        input >> x.first >> x.second;
    }
    input.close();

    // algo
    sort(a.begin(), a.end());
    int t = 0;
    for(pair<int, int> x: a)
    {
        if(x.first >= t){
            t = x.first + x.second;
        }else{
            t += x.second;
        }
    }

    // output
    ofstream output("cowqueue.out");
    output << t;
    output.close();
    return 0;
}