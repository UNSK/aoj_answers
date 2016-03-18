#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    int a;
    int first = true;
    while (cin >> a, a) {
        int b[4], ans[4];
        int kind[4] = {10, 50, 100, 500};
        cin >> b[0] >> b[1] >> b[2] >> b[3];

        int total = 0;
        loop(4, i) total += b[i] * kind[i];
        int oturi = total - a;
        for (int i = 3; i >= 0; i--) {
            int tmp = oturi / kind[i];
            ans[i] = b[i] - tmp;
            oturi -= tmp * kind[i];
        }

        if (!first) cout << endl;
        loop(4, i) if(ans[i] > 0) cout << kind[i] << ' ' << ans[i] << endl;
        first = false;
    }
}
