#include <iostream>
using namespace std;

int CurrentInputDouble() {
    int a;
    while (!(cin >> a) || a < INT_MIN || a > INT_MAX) {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Incorrect input, try again:\n";
    }
    return a;
}

int main()
{
    


    /*const char* a = "home is the best place where i have ever lived. she was beautiful, like my mum";
    int s;
    cin >> s;
    int i = 0;
    if ((a[0] != 'a' &&
        a[0] != 'e' &&
        a[0] != 'i' &&
        a[0] != 'o' &&
        a[0] != 'y' &&
        a[0] != 'u') && a[s] == ' ') {
        i = s;
    }
    while (a[i] != '\0') {
        if ((a[i+1] != 'a' &&
            a[i+1] != 'e' &&
            a[i+1] != 'i' &&
            a[i+1] != 'o' &&
            a[i+1] != 'y' &&
            a[i+1] != 'u' && a[i] == ' ') && (a[i+s+1] == ' ' || a[i+s+1] == '.' || a[i+s+1] == ',')) {
            i = i + s + 1;
            continue;
        }
        cout << a[i];
        i++;
    }*/
}

