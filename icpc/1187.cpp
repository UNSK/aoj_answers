#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;


int main()
{
    int M, T, P, R;
    while (cin >> M >> T >> P >> R, M) {
        vector<vector<int>> result(T, vector<int>(3+P,0));
        loop(T,i) result[i][0] = i+1;
        loop(R,i) {
             int m, t, p, j;
             cin >> m >> t >> p >> j;
             if (j) {
                 if (result[t-1][p+2] != -1) result[t-1][p+2]++;
             } else {
                 if (result[t-1][p+2] != -1) {
                     result[t-1][1]++;
                     result[t-1][2] += result[t-1][p+2]*20 + m;
                     result[t-1][p+2] = -1;
                 }
             }
        }
        
        sort(all(result),
                [](vector<int> a, vector<int> b) {
                    if(a[1] != b[1]) return a[1] > b[1];
                    if(a[2] != b[2]) return a[2] < b[2];
                    return a[0] > b[0];
                });
            
        loop(T,i) {
            cout << result[i][0];
            if (i==T-1) {
                cout << endl;
            } else if (result[i][1] == result[i+1][1]
                    && result[i][2] == result[i+1][2])
                cout << '=';
            else cout << ',';
        }
    }
}
