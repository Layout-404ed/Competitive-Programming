// problem: https://lmcodequestacademy.com/problem/anagram-checker
// time complexity: idk
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
    
    size_t t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        size_t mark = s.find('|');
        string s1 = s.substr(0, mark);
        string s2 = s.substr(mark+1, s.length());

        set<char> a;
        for(char c: s1)
        {
            a.insert(c);
        }
        set<char> a1;
        for(char c: s2)
        {
            a.insert(c);
        }

        cout << s << " = ";
        if(a != a1){
            cout << " NOT AN ";
        }

        cout << "ANAGRAM" << '\n';
    }

    return 0;
}
