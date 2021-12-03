#include <iostream>
#include <cmath>
using namespace std;

void starline() {
    cout << "\n\n**********************\n\n";
}

int StringToNum(char* ptr) {
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

double StringToRealNum(char* ptr) {
    int lenght = 0;
    int index = 0;
    while (ptr[lenght] != '\0') {
        if (ptr[lenght] == '.'){
            index = lenght;
        }
        lenght++;
    }
    double realNum = 0.0;
    int k = index - 1;
    int* arr = new int[lenght-1];
    for (int i = 0; i < index; i++) {
        arr[i] = static_cast<double>(ptr[i] - 48);
        realNum += arr[i] * pow(10, k);
        k--;
    }
    k = -1;
    for (int i = index + 1; i < lenght - 1; i++) {
        arr[i] = static_cast<double>(ptr[i] - 48);
        realNum += arr[i] * pow(10, k);
        k--;
    }
    delete[] arr;
    return realNum;
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

void RealNumToString(double a) {
    char str[20];
    char* ptr = str;

    double w_part;
    double fract_part;

    int* first_arr = new int[20];
    int* second_arr = new int[20];

    fract_part = modf(a, &w_part);
    
    int wh = static_cast<int>(w_part);
    int k = 0;
    while (wh != 0) {
        first_arr[k] = wh % 10;
        wh /= 10;
        k++;
    }

    int x = 0;
    int p = k;

    fract_part *= 1e9;
    int fr = static_cast<int>(fract_part);

    if (fr % 10 != 0) {
        fr++;
    }

    while (fr % 10 == 0) {
        fr /= 10;
    }

    while (fr != 0) {
        second_arr[k] = fr % 10;
        fr /= 10;
        k++;
    }

    for (int i = p - 1; i > -1; i--) {
        ptr[x] = static_cast<char>(first_arr[i] + 48);
        cout << ptr[x];
        x++;
    }
    cout << '.';
    for (int i = k - 1; i > p; i--) {
        ptr[x] = static_cast<char>(second_arr[i] + 48);
        cout << ptr[x];
        x++;
    }
    
}

int CurrentInputInt() {
    int a;
    while (!(cin >> a) || a < INT_MIN || a > INT_MAX) {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Incorrect input, try again:\n";
    }
    return a;
}

double CurrentInputDouble() {
    double a;
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
    cout << "enter random 9 numbers\nstring 1: ";
    cin.getline(str, 9);
    char* ptr = str;
    cout << "yout number : " << StringToNum(ptr);
    starline();*/

    cout << "#2 function (convert number to string)\n";
    int number;
    cout << "enter random integer number\n";
    number = CurrentInputInt();
    cout << "your string : ";
    NumberToString(number);
    starline();

    cout << "#3 function (convert string to real number)\n";
    char str2[80];
    cout << "string 2: \n";
    cin.getline(str2, 80);
    char* ptr2 = str2;
    cout << "your number: " << StringToRealNum(ptr2);
    starline();

    cout << "#4 function (convert real number to string)\n";
    double num;
    num = CurrentInputDouble();
    cout << "enter random real number\n";
    cout << "your string : ";
    RealNumToString(num);

    return 0;
}
