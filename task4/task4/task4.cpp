#include <iostream>
#include <string>
using namespace std;

string removeUpperLetters(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'C' || s[i] == 'Q' || s[i] == 'W' || s[i] == 'X') {
            s.erase(i,1);
        }
    }
    return s;
}

string insteadOf_c(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i+1] == 'c' && (s[i] == 'e' || s[i] == 'i' || s[i] == 'y')) {
            s[i + 1] = 's';
        }
    }
    return s;
}

string insteadOf_q(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'q') {
            s[i] = 'k';
        }
    }
    return s;
}

string insteadOf_qu(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'q' && s[i+1] == 'u') {
            s[i] = 'k';
            s[i + 1] = 'v';
        }
    }
    return s;
}

string insteadOf_x(string s) {
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'x') {
            s.replace(i, 1, "ks");
        }
    }
    return s;
}

string insteadOf_w(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'w') {
            s[i] = 'v';
        }
    }
    return s;
}

string insteadOf_ph(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' && s[i+1] == 'h') {
            s.replace(i, 2, "f");
        }
    }
    return s;
}

string insteadOf_you(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'y' && s[i+1] == 'o' && s[i+2] == 'u') {
            s.replace(i, 3, "u");
        }
    }
    return s;
}

string insteadOf_oo(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o' && s[i + 1] == 'o') {
            s.replace(i, 2, "u");
        }
    }
    return s;
}

string insteadOf_ee(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'e' && s[i + 1] == 'e') {
            s.replace(i, 2, "i");
        }
    }
    return s;
}

string insteadOf_th(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 't' && s[i + 1] == 'h') {
            s.replace(i, 2, "z");
        }
    }
    return s;
}

string insteadOf_doubleConsonant(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'a' && s[i] != 'A' && s[i] != 'e' && s[i] != 'E' &&
            s[i] != 'i' && s[i] != 'I' && s[i] != 'y' && s[i] != 'Y' &&
            s[i] != 'o' && s[i] != 'O' && s[i] != 'u' && s[i] != 'U') 
        {
            if (s[i] == s[i + 1]) {
                s.erase(i, 1);
            }
        }
        
    }
    return s;
}

string ChangeLanguage(string s) {
    s = removeUpperLetters(s);
    s = insteadOf_c(s);
    s = insteadOf_q(s);
    s = insteadOf_qu(s);
    s = insteadOf_x(s);
    s = insteadOf_w(s);
    s = insteadOf_ph(s);
    s = insteadOf_you(s);
    s = insteadOf_oo(s);
    s = insteadOf_ee(s);
    s = insteadOf_th(s);
    s = insteadOf_doubleConsonant(s);
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    s = ChangeLanguage(s);
    cout << s;
    return 0;
}
