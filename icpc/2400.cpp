#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    int t, p, r;
    while (cin >> t >> p >> r, t) {
        vector<vector<int>> result(t, vector<int>(3+p,0));
        loop (t, i) result[i][0] = i+1;
        loop (r, i) {
            int tid, pid, time;
            string msg;
            cin >> tid >> pid >> time >> msg;
            if (msg == "CORRECT") {
                if (result[tid-1][pid+2] != -1) {
                    result[tid-1][1]++;
                    result[tid-1][2] += result[tid-1][pid+2]*1200 + time;
                    result[tid-1][pid+2] = -1;
                }
            } else {
                if (result[tid-1][pid+2] != -1)
                    result[tid-1][pid+2]++;
            }
        }
        sort(all(result),
                [](vector<int> a, vector<int> b) {
                    if (a[1] != b[1]) return a[1] > b[1];
                    if (a[2] != b[2]) return a[2] < b[2];
                    return a[0] < b[0];
                });
        for (auto t : result)
            cout << t[0] << ' ' << t[1] << ' ' << t[2] << endl;
    }
}
