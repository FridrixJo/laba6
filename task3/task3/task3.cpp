#include <iostream>
using namespace std;

void starline() {
    cout << "\n\n**********************\n\n";
}

int StringToNumber(char* ptr) {
    int lenght = 0;
    while (ptr[lenght] != '\0') {
        lenght++;
    }
    int number = 0;
    int k = lenght - 1;
    int* arr = new int[lenght];
    for (int i = 0; i < lenght; i++) {
        arr[i] = static_cast<int>(ptr[i] - 48);
        number += arr[i] * pow(10, k);
        k--;
    }
    delete[] arr;
    return number;
}

void NumberToString(int a) {
    int arr[10];
    char str[10];
    char* ptr = str;
    int k = 0;
    while (a != 0) {
        arr[k] = a % 10;
        a /= 10;
        k++;
    }
    for (int i = k-1; i > - 1; i--) {
        ptr[i] = static_cast<char>(arr[i] + 48);
        cout << *(ptr + i);
    }
}

int CurrentInput() {
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
    cout << "#1 function (convert string to number)\n";
    char str[9];
    cout << "enter random 9 numbers\n";
    cin.getline(str, 9);
    char* ptr = str;
    cout << StringToNumber(ptr);
    starline();
    cout << "#2 function (convert string to number)\n";
    int number;
    cout << "enter random number\n";
    number = CurrentInput();
    NumberToString(number);
    starline();
    
    return 0;
}
