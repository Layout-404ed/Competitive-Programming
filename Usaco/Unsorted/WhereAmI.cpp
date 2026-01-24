// problem: https://usaco.org/index.php?page=viewproblem2&cpid=964
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
    ifstream in("whereami.in");
    int n; in >> n;
    string s; in >> s;
    in.close();
    
    // algo
    int x = 1;
    for(int i = 1; i < n; ++i)
    {
        map<string, int> a;
        bool found = true;
        for(int j = 0; j + i <= n; ++j)
        {
            string sub = s.substr(j, i);
            if(a.count(sub) == 1){
                found = false;
                break;
            }else{
                a.insert({sub, 1});
            }
        }
        if(found){
            x = i;
            break;
        }
    }
    
    // output
    ofstream out("whereami.out");
    out << x;
    out.close();

    return 0;
}