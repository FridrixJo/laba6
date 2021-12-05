#include <iostream>
#include <string>
using namespace std;

long long fact(int a) {
    if (a < 1) {
        return 1;
    }
    return a * fact(a - 1);
}

int main()
{
    string s;
    cout << "enter your string: ";
    cin >> s;
    cout << "\n";
    int lenght = s.size();
    int res = fact(lenght);
    for (int i = 0; i < lenght; i++) {
        int duplicates = 1;
        for (int j = i + 1; j < lenght; j++) {
            if (s[i] == s[j]) {
                duplicates++;
            }
        }
        if (duplicates) {
            cout << res << " * " << fact(duplicates) << endl;
            res /= duplicates;
        }
    }
    cout << res;
    return 0;
}