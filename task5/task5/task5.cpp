#include <iostream>
#include <string>
using namespace std;

int fact(int a) {
	if (a < 1) {
		return 1;
	}
	return a * fact(a - 1);
}

void returnAnswer() {
	int L;
	cin >> L;
	int M;
	cin >> M;
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	unsigned int m = 0;
	if ((s1.size() + s2.size()) == L) {
		m = 2;
	}
	else if ((s1.size() + s2.size()) < L) {
		int d = L - (s1.size() + s2.size());
		m = (L - (s1.size() + s2.size())) * 26 * fact(d) * 2;
	}
	else if ((s1.size() + s2.size()) > L) {
		int d = (s1.size() + s2.size()) - L;
		for (int i = 0; i < d; i++) {
			string str = s1.erase(0, s1.size() - d);
			if (str[i] == s2[i]) {
				m = 1;
			}
			else {
				break;
			}
		}
		for (int i = 0; i < d; i++) {
			string str = s2.erase(0, s2.size() - d);
			if (str[i] == s1[i]) {
				m = 1;
			}
			else {
				break;
			}
		}
	}
	int res;
	res = m % M;
	cout << res << endl;
}
   
void returnAnswerT(int t) {
	for (int i = 0; i < t; i++) {
		returnAnswer();
	}
}

int main()
{
	int t;
	cin >> t;
	returnAnswerT(t);
	return 0;
}
