#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;


int main()
{
    int max = 110000;
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

    int n, p;
    while (cin >> n >> p) {
        if (n == -1) break;

        int start;
        for (int i = 0; i < primes.size(); i++) {
            if (n < primes[i]) {
                start = i;
                break;
            }
        }

        vector<int> nums;
        for (int i = start; i < start+100; i++) {
            for (int j = i; j < start+100; j++) {
                nums.push_back(primes[i]+primes[j]);
            }
        }

        sort(all(nums));
        cout << nums[p-1] << endl;

    }
}
