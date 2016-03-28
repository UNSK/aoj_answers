#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    int q;
    cin >> q;
    loop(q,i) {
        int n;
        cin >> n;
        int org = n;
        int ans = 0;
        while (n > 10) {
            string s = to_string(n);
            int m = 0;
            loop(s.size()-1, j) {
                int f = stoi(s.substr(0,j+1));
                int l = stoi(s.substr(j+1));
                m = max(m, f*l);
            }
            n = m;
            if (n == org) {
                ans = -1;
                break;
            }
            ans++;
        }
        cout << ans << endl;
    }
}
