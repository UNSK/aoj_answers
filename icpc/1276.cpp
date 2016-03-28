#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;


int main()
{
    int max = 1299710;
    vector<int> mat(max, 1);
    vector<int> primes;
    for (int i=2; i<sqrt(max); i++) {
        if (mat[i]) {
            for (int j=i*2; j < max; j+=i) mat[j] = 0;
        }
    }
    for (int i=2; i<max; i++) {
        if (mat[i]) primes.push_back(i);
    }

    int k;
    while (cin >> k, k) {
        loop(primes.size(),i) {
            if (k == primes[i]) {
                cout << 0 << endl;
                break;
            } else if (k < primes[i]) {
                cout << primes[i]-primes[i-1] << endl;
                break;
            }
        }
    }
}
