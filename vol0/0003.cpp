#include <iostream>
using namespace std;

int main() {
	int loop;
	cin >> loop;
	bool isRight[loop];
	for (int i = 0; i < loop; i++) {
		int num[3];
		int tmp;
		cin >> num[0] >> num[1] >> num[2];
		if (num[0] < num[1]) {
			if (num[1] < num[2]) {
				tmp = num[0];
				num[0] = num[2];
				num[2] = tmp; 
			} else {
				tmp = num[0];
				num[0] = num[1];
				num[1] = tmp; 
			}
		} else if (num[0] < num[2]) {
				tmp = num[0];
				num[0] = num[2];
				num[2] = tmp; 
		}

		if (num[0] * num[0] == num[1] * num[1] + num[2] * num[2]) {
			isRight[i] = true;
		} else {
			isRight[i] = false;
		}
	}
	for (int i = 0; i < loop; i++) {
		cout << (isRight[i] ? "YES" : "NO") << endl;
	}
}
