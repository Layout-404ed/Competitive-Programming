// problem:
// time complexity: o(n logn)
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template <typename T> using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

ll get_f(ll s, ll m, const v<ll>& l, const v<ll>& r, const v<ll>& pref) {
    ll A = s, B = s + m - 1;
    int i = lower_bound(r.begin(), r.end(), A) - r.begin();
    int j = upper_bound(l.begin(), l.end(), B) - l.begin() - 1;
    if (i > j)
        return 0;
    if (i == j) {
        return max(0LL, min(B, r[i]) - max(A, l[i]) + 1);
    }
    ll ans = 0;
    ans += max(0LL, r[i] - max(A, l[i]) + 1);
    ans += max(0LL, min(B, r[j]) - l[j] + 1);
    if (i + 1 <= j - 1) {
        ans += pref[j - 1] - pref[i];
    }
    return ans;
}

ll solve() {
    // input
    int n;
    ll m, k;
    cin >> n >> m >> k;

    v<ll> l(n), r(n);
    v<ll> pref(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        ll len = r[i] - l[i] + 1;
        pref[i] = (i == 0 ? len : pref[i - 1] + len);
    }

    // algo
    if (k == 0) {
        ll s = r.back() + 1;
        ll rem = s % 11;
        if (rem != 0)
            s += (11 - rem);
        return s;
    }

    v<ll> cand;
    cand.push_back(1);
    cand.push_back(r.back() + 1);
    for (int i = 0; i < n; i++) {
        ll vals[] = {l[i], r[i] + 1, l[i] - m, l[i] - m + 1, r[i] - m, r[i] - m + 1};
        for (ll val : vals) {
            if (val >= 1)
                cand.push_back(val);
        }
    }
    sort(cand.begin(), cand.end());
    cand.erase(unique(cand.begin(), cand.end()), cand.end());

    ll ans = -1;
    ll f1 = get_f(cand[0], m, l, r, pref);

    if (f1 == k) {
        ans = cand[0];
        if (cand[0] % 11 == 0)
            return cand[0];
    }

    for (size_t i = 0; i + 1 < cand.size(); i++) {
        ll c1 = cand[i];
        ll c2 = cand[i + 1];
        ll f2 = get_f(c2, m, l, r, pref);

        ll min_f = min(f1, f2);
        ll max_f = max(f1, f2);

        if (min_f <= k && k <= max_f) {
            if (f1 < f2) {
                ll s = c1 + (k - f1);
                if (ans == -1)
                    ans = s;
                if (s % 11 == 0)
                    return s;
            } else if (f1 > f2) {
                ll s = c1 + (f1 - k);
                if (ans == -1)
                    ans = s;
                if (s % 11 == 0)
                    return s;
            } else {
                ll rem = c1 % 11;
                ll next_11 = (rem == 0 ? c1 : c1 + (11 - rem));
                if (next_11 <= c2)
                    return next_11;
                if (ans == -1)
                    ans = c1;
            }
        }
        f1 = f2;
    }

    // output
    return ans;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';

    return 0;
}
