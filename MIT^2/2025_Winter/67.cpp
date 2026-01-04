/*
     🥹
    👉👈
    🦶🦶
*/

// problem: https://mitit.org/Contest/ViewProblem/67?cid=beginner-25-26
// time complexity: O(n)
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

v<int> factors(int n);

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        // input
        int n; cin >> n;
        v<int> a;

        // algo
        int i = 1;
        while(a.size() < n - 1)
        {
            cout << "? " << i << ' ' << i + 1 << '\n';
            int x; cin >> x;

            v<int> b = factors(x);
            a.push_back(b[b.size() / 2 - 1]);
            a.push_back(b[b.size() / 2]);

            i += 2;
        }
        if(n%2){
            cout << "? " << i - 1 << ' ' << i << '\n';
            int x; cin >> x;
            if(x == -1) exit(EXIT_FAILURE);

            double y = x / (double)a[a.size() - 1];
            if(y != x / a[a.size() - 1]){
                a.push_back(x / a[a.size() - 2]);
                swap(a[a.size() - 2], a[a.size() - 3]);
            }
            else
                a.push_back(y);
        }

        // output
        cout << "! ";
        for(auto i: a)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}

v<int> factors(int n){
    v<int> a;
    for(int i = 1; i <= n; ++i)
    {
        if(!(n % i))
            a.push_back(i);
    }
    return a;
}