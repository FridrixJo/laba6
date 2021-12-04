#include <iostream>
#include <string>
using namespace std;

long long fact(int a) {
    if (a == 1) {
        return 1;
    }
    return a * fact(a - 1);
}

int main()
{
    cout << fact(5);
    string str;
    cout << "enter your string: ";
    cin >> str;
    cout << "\n";
    int lenght = str.size();
    double result = fact(lenght);
    int duplicates = 0;
    for (int i = 0; i < lenght; i++) {
        for (int j = i + 1; j < lenght; j++) {
            if (str[i] == str[j]) {
                duplicates++;
            }
        }
    }
    cout << duplicates << endl;
    if (duplicates) {
        result /= fact(duplicates);
    }
    cout << result;

    return 0;
}