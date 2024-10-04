#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll;
int main() {

    int n, m;
    cin >> n >> m;
    vector<ll> c(n);
    vector<ll> t(m);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }

    sort(c.begin(), c.end());
    sort(t.begin(), t.end(), greater<ll>());

    vector<pair<ll, priority_queue<ll, vector<ll>, greater<ll> > > > mds(m);
    for (int i = 0; i < m; i++) {
        mds[i].first = t[i];
    }

    for (int i = 0; i < n; i++) {
        mds[i % m].second.push(c[i]);

    }
    ll time_w = 0;
    for (int i = 0; i < m; i++) {
        int total =0;
        vector<ll> timer_esp;
        while (mds[i].second.size() > 1) {
                total += mds[i].second.top() * mds[i].first;
                mds[i].second.pop();
                timer_esp.push_back(total);
        }

        for (ll j = 0; j < timer_esp.size(); j++) {
            time_w += timer_esp[j];
        }
    }

    cout << time_w << endl;


    return 0;
}
