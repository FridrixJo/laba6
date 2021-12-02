#include <iostream>
#include <cstring>
using namespace std;

int CurrentInput() {
    int a;
    while (!(cin >> a) || a < INT_MIN || a > INT_MAX) {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Incorrect input, try again:\n";
    }
    return a;
}

bool isConsonant(char a) {
    if (a != 'a' && a != 'A' && a != 'e' && a != 'E' &&
        a != 'i' && a != 'I' && a != 'y' && a != 'Y' &&
        a != 'o' && a != 'O' && a != 'u' && a != 'U') {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    char str[100];
    cout << "string : ";
    cin.getline(str, 100);
    char* ptr = str;
    cout << "choose the lenght of the word you wanna delete\n";
    int len = CurrentInput();
    int i = 0;
    int end = strlen(ptr);
    if (ptr[len] == ' ' && isConsonant(ptr[0])) {
        i = len;
    }
    if (ptr[end - len - 1] == ' ' && isConsonant(ptr[end-len])) {
        end -= len;
    }
    cout << "your fixed text: ";
    for (i; i < end; i++) {
        
        if (ptr[i] == ' ' && ptr[i+1+len] == ' ' && isConsonant(ptr[i+1])) {
            i += len;
        }
        else {
            cout << *(ptr+i);
        }
    }
 
    return 0;
}

