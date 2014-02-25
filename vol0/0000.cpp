#include <iostream>
using namespace std;

#define QQ 9
int main() {
	for (int i = 1; i <= QQ; i++) {
		for (int j = 1; j <= QQ; j++) {
			cout << i << "x" << j << "=" << i * j << "\n";
		}
	}
	return 0;
}