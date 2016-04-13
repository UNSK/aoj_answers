#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;


int main()
{
    int n;
    cin >> n;
    ll x = 3;
    int ans = 1;
    while (n > x) {
        ans++;
        x *= 3;
    }
    cout << ans << endl;
}
