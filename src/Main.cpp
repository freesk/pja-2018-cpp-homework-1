//============================================================================
// Author      : Dmytro Kurbatov
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int min = 0;
	int max = 0;
	int minCount = 0;
	int maxCount = 0;

	cout << "Enter a number: ";
	cin >> n;

	min = n;
	max = n;

	minCount++;
	maxCount++;

	while (n != 0) {
		cout << "Enter a number: ";
		cin >> n;

		if (n == 0) break;

		if (n == min) {
			minCount++;
		} else if (n == max) {
			maxCount++;
		} else {
			if (n < min) {
				min = n;
				minCount = 1;
			}
			else if (n > max) {
				max = n;
				maxCount = 1;
			}
		}
	}

	cout << "Min = " << min << " " << minCount << " times" << endl;
	cout << "Max = " << max << " " << maxCount << " times" << endl;

	return 0;
}
