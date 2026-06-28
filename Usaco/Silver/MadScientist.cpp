// problem: 
// time complexity:
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
    
    ifstream in("breedflip.in");
    ofstream out("breedflip.out");

    // input
    int n; in >> n;
    string s1; in >> s1;
    string s2; in >> s2;

    // algo
    v<bool> gud(n, true);
    for(int i = 0; i < n; ++i)
        gud[i] = s1[i] == s2[i];
    
    int x = 0;
    int ct = 0;
    for(bool i: gud)
    {
        if(!i){
            if(ct == 0)
                ++x;
            ++ct;
        }else
            ct = 0;
    }

    // output
    out << x;

    in.close();
    out.close();

    return 0;
}
