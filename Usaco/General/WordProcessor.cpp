// problem: https://usaco.org/index.php?page=viewproblem2&cpid=987
// time complexity: o(nlog(n))
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
    ifstream in("word.in");
    int n, k; in >> n >> k;
    v<string> a(n);
    for(string &i: a)
    {
        in >> i;
    }

    // algo
    string s = "";
    int x = 0;
    for(int i = 0; i < n; ++i)
    {
        string t = a[i];
        if(x + t.length() <= k){
            s += t + ' ';
            x += t.length();
        }else{
            s.erase(s.end() - 1);
            s += '\n';
            x = 0;
            --i;
        }
    }
    s.erase(s.end() - 1);

    // output
    ofstream out("word.out");
    out << s;

    in.close();
    out.close();
    return 0;
}
