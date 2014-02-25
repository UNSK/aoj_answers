#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> count;
	int n;
	while (cin >> n) {
		int r = 0;
		for (int a = 0; a < 10; a++) {
			for (int b = 0; b < 10; b++) {
				for (int c = 0; c < 10; c++) {
					for (int d = 0; d < 10; d++) {
						if (a + b + c + d == n) r++;
					}
				}
			}
		}
		count.push_back(r);
	}
	for (int i = 0; i < count.size(); i++) {
		cout << count[i] << endl;
	}
}