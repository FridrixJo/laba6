#include <iostream>
#include <string>
using namespace std;

bool isItPossible(string s, string t) {
	bool status = false;
	int k = 0;
	while (k < t.size()) {
		if (s.find(t[k], 0) < 1e9) {
			status = true;
			k++;
		}
		else {
			status = false;
			break;
		}
	}
	return status;
}

bool itFits(string s, string t) {}

int main() {
	string s;
	cin >> s;
	string t;
	cin >> t;
	cout << isItPossible(s, t);
	return 0;
}
