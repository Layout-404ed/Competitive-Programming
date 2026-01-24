// problem: https://usaco.org/index.php?page=viewproblem2&cpid=964
// time complexity: o(n^3)
// i/o: filio

// TODO: DEBUG
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int count(string str, string target){
    int x = 0;
    for(int i = 0; i < str.length()-target.length(); ++i)
    {
        if(str.substr(i, target.length()) == target){
            ++x;
        }
    }
    return x;
}
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    ifstream in("whereami.in");
    int n; in >> n;
    string s; in >> s;
    in.close();

    // algo
    int x = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(count(s, s.substr(0, i)) <= 1){
            x = i + 1;
            break;
        }
    }

    // output
    ofstream out("whereami.out");
    out << x;
    out.close();

    return 0;
}
