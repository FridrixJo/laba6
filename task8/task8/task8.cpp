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

void itFits() {
	string s;
	cin >> s;
	string t;
	cin >> t;
	if (isItPossible(s, t)) {
		int k = 0;
		string s1 = "";
		for (int i = 0; i < s.size(); i++) {
			if (t[k] == s[i]) {
				s1.push_back(s[i]);
				k++;
			}
		}
		for (int i = s.size() - 2; i > -1; i--) {
			if (t[k] == s[i]) {
				s1.push_back(s[i]);
				k++;
			}
		}
		if (s1 == t) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	else {
		cout << "NO\n";
	}
}

void itFitsQ(int q) {
	for (int i = 0; i < q; i++) {
		itFits();
	}
}

int main() {
	int q;
	cout << "enter q\n";
	cin >> q;
	itFitsQ(q);
	return 0;
}
