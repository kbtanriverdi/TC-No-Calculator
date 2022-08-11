#include <iostream>

using namespace std;

int main() {
	int count = 0;
	for (int a = 1; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			for (int c = 0; c < 10;  c++) {
				for (int d = 0; d < 10; d++) {
					for (int e = 0; e < 10; e++) {
						for (int f = 0; f < 10; f++) {
							for (int g = 0; g < 10; g++) {
								for (int h = 0; h < 10; h++) {
									for (int i = 0; i < 10; i++) {
										int sum1 = (a + c + e + g + i);
										int sum2 = (b + d + f + h) * 9 + 7 * (sum1);
										int j = sum2 % 10;
										int tot = sum1 + (b + d + f + h) + j;
										int temp = sum1 * 8;
										if (temp % 10 == tot % 10) {
											int k = tot % 10;
											count += 1;
											if (count % 1000 == 0){
												cout << count<< endl;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cin >> count;
	return 0;
}