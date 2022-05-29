#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto wr = string{ "Wide Receiver " };
	const auto lm = string{ "Lineman " };
	const auto qb = string{ "Quarterback " };

	double a, b, c;
	cin >> a >> b >> c;
	while (0 < a || 0 < b || 0 < c) {
		auto hasPos = bool{ false };

		if (a <= 4.5 && 150 <= b && 200 <= c) {
			cout << wr;
			hasPos = true;
		}

		if (a <= 6.0 && 300 <= b && 500 <= c) {
			cout << lm;
			hasPos = true;
		}

		if (a <= 5.0 && 200 <= b && 300 <= c) {
			cout << qb;
			hasPos = true;
		}

		if (!hasPos) {
			cout << "No positions";
		}

		cout << '\n';

		cin >> a >> b >> c;
	}

	return 0;
}