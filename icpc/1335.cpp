#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;


int dfs(int i, int count, int sum, int n, int k, int s) {
     if (count == n) {
         if (sum == s) return 1;
         else return 0;
     } else if (count > n) return 0;
     else {
         int ans = 0;
         for (int j = i+1; j <= n; j++) {
             ans += dfs(j, count+1, j+sum, n, k, s);
             INSP(ans)
         }
         return ans;
     }
}

int main()
{
    int n,k,s;
    while (cin >> n >> k >> s, n) {
        cout << dfs(0,0,0,n,k,s) << endl;
    }
}
