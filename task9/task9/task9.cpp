#include <iostream>
#include <string>
using namespace std;

int countNum(string s) {
    int a[100];
    int m = 0;
    for (int i = s.size() - 1; i > -1; i--) {
        if (isdigit(s[i])) {
            int k = 0;
            int res = 0;
            for (int j = i; j > -1; j--) {
                if (isdigit(s[j])) {
                    res += static_cast<int>(s[j]-48) * pow(10, k);
                    k++;
                }
                else {
                    break;
                }
            }
            a[m] = res;
            m++;
            i -= k;
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += a[i];
    }
    return sum;
}

int main()
{
    string s;
    cin >> s;
    cout << "the sum of all numbers int the string : " << countNum(s);
    return 0;
}
