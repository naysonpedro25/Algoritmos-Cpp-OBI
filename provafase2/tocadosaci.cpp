#include <iomanip>
#include <iostream>

#include <queue>
#include <vector>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<int> d(n);
    d[0] = -1;
    vector<pair<int, int> > interv(q);
    for (int i = 1; i <= n; ++i) {
        int v;
        cin >> v;
        d[i] = v;
    }

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        interv[i] = {l, r};
    }



    for (int i = 0; i < q; ++i) {
        queue<int> mqueue;
        int pot = 0;
        for (int j = interv[i].first; j <= interv[i].second; ++j) {
            mqueue.push(d[j]);
        }
        for (int j = interv[i].first; j <= interv[i].second; ++j) {
            int first = mqueue.front();
            mqueue.pop();
            queue<int> newQ = mqueue;

            while(!newQ.empty()) {

                pot += (first * 10) + newQ.front();
                newQ.pop();

                // cout << comcat << endl;
            }
            mqueue.push(first);
        }

        cout << pot << endl;
    }


    return 0;
}


















/*]
*
            for (int k = interv[i].first + 1; k <= interv[i].second; ++k) {
                string comcat = to_string(first) + "" + to_string(newQ.front());
                pot += stoi(comcat);
                newQ.pop();
                cout << comcat << endl;
                // cout << comcat << endl;
            }
 */
