#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    double sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            int counter = 0;
            for (int j = i + 1; isdigit(s[i]); j++) {
                counter++;
            }
            for (int j = 0; j <= counter; j++) {                    
                sum += pow(10, counter - j) * s[i + j];
            }
            i += counter;
        }
    }
    cout << sum;
    return 0;
}
