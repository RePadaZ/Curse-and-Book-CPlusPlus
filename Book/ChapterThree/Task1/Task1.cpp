#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int n;

	cout << "Input you number: ";
	cin >> n;

	for (int i = 1; i <= 200; i++) {

		cout << setw(5) <<n * i;

		if (i % 10 == 0) {
			cout << endl;
		}

	}
	return 0;
}
