#include<iostream>;
using namespace std;

int main() {
	for (int i = 1; i <= 200; i++) {
		int count = 0;
		if (i % 2 != 0) {
			for (int j = 1; j <= 200; j++) {
				if (i % j == 0) {
					count++;
				}
			}
		}
		if (count == 8) {
			cout << i << " ";
		}
	}
}