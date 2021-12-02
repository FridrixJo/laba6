#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void starline() {
    cout << "\n\n**********************\n\n";
}

int main()
{
    char str[80];
    char first_part[80];
    char second_part[80];
    cout << "str : ";
    cin.getline(str, 80);
    int n = 0, p = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i+1] == '.' && isdigit(str[i]) && isdigit(str[i + 2])) {
            int k = i + 1, m = i + 1;
            for (int j = k - 1; j > -1; j--) {
                if (isdigit(str[j]) || str[j] == '-') {
                   first_part[n] = str[j];
                   n++;
                   if (str[j] == '-') {

                       break;
                   }
                }
                else {
                    break;
                }
            }
            for (int q = m + 1; q < strlen(str); q++) {
                if (isdigit(str[q]) && str[q] != '.' && str[q] != ',' && str[q] != '=' && str[q] != '+') {
                    second_part[p] = str[q];
                    p++;
                }
                else {
                    break;
                }
            }
            break;
        }else {
            continue;
        }
    }
    starline();
    cout << "your value:\t";
    for (int i = n-1; i > -1; i--) {
        cout << first_part[i];
    }
    cout << '.';
    for (int i = 0; i < p; i++) {
        cout << second_part[i];
    }
    cout << "\n\nif you get only a dot , then there's no such value in your string:(\n";

    return 0;
}