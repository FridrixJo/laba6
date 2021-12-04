#include <iostream>
#include <string>
using namespace std;

void removeUpperLetters(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'C' || s[i] == 'Q' || s[i] == 'W' || s[i] == 'X') {
            s.erase(i,1);
        }
    }

}

void insteadOf_c(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i+1] == 'c' && (s[i] == 'e' || s[i] == 'i' || s[i] == 'y')) {
            s[i + 1] = 's';
        }
    }

}

void insteadOf_q(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'q') {
            s[i] = 'k';
        }
    }

}

void insteadOf_qu(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'q' && s[i+1] == 'u') {
            s[i] = 'k';
            s[i + 1] = 'v';
        }
    }

}

void insteadOf_x(string s) {
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'x') {
            s.replace(i, 1, "ks");
        }
    }

}

void insteadOf_w(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'w') {
            s[i] = 'v';
        }
    }

}

void insteadOf_ph(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' && s[i+1] == 'h') {
            s.replace(i, 2, "f");
        }
    }

}

void insteadOf_you(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'y' && s[i+1] == 'o' && s[i+2] == 'u') {
            s.replace(i, 3, "u");
        }
    }

}

void insteadOf_oo(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o' && s[i + 1] == 'o') {
            s.replace(i, 2, "u");
        }
    }

}

void insteadOf_ee(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'e' && s[i + 1] == 'e') {
            s.replace(i, 2, "i");
        }
    }

}

void insteadOf_th(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 't' && s[i + 1] == 'h') {
            s.replace(i, 2, "z");
        }
    }

}

void insteadOf_doubleConsonant(string s) {
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

}

//string ChangeLanguage(string s) {
//    removeUpperLetters(s);
//    insteadOf_c(s);
//    insteadOf_q(s);
//    insteadOf_qu(s);
//    insteadOf_x(s);
//    insteadOf_w(s);
//    insteadOf_ph(s);
//    insteadOf_you(s);
//    insteadOf_oo(s);
//    insteadOf_ee(s);
//    insteadOf_th(s);
//    insteadOf_doubleConsonant(s);
//    return s;
//}

int main()
{
    string s;
    getline(cin, s);
    removeUpperLetters(s);
    insteadOf_c(s);
    insteadOf_q(s);
    insteadOf_qu(s);
    insteadOf_x(s);
    insteadOf_w(s);
    insteadOf_ph(s);
    insteadOf_you(s);
    insteadOf_oo(s);
    insteadOf_ee(s);
    insteadOf_th(s);
    insteadOf_doubleConsonant(s);
    cout << s;
    return 0;
}
