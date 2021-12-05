#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int L = s.size();
    bool status = false;
    for (int i = 0; i < L; i++) {
        if (s[i] == s[L - 1 - i]) {
            status = true;
        }
        else {
            status = false;
        }
    }
    return status;
}

int fromLeftToRight(string s) {
    int L = s.size();
    int L1 = -1;
    for (int i = 0; i < L; i++) {
        i = 0;
        s = s.erase(i, 1);
        if (!isPalindrome(s)) {
            L1 = s.size();
            break;
        }
        L--;
    }
    return L1;
}

int fromRightToLeft(string s) {
    int L = s.size();
    int L2 = -1;
    for (int i = L - 1; i > -1; i--) {
        i = L - 1;
        s = s.erase(L - 1, 1);
        if (!isPalindrome(s)) {
            L2 = s.size();
            break;
        }
        L--;
    }
    return L2;
}

int main()
{
    string s;
    cout << "string : ";
    cin >> s;
    int L1 = fromLeftToRight(s);
    int L2 = fromRightToLeft(s);
    if (L1 > L2) {
        cout << "the lenght of the most longest !palindrome = " << L1 << endl;
    }
    else {
        cout << "the lenght of the most longest !palindrome = " << L2 << endl;
    }
    return 0;
}
