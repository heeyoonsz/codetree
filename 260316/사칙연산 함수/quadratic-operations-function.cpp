#include <iostream>

using namespace std;

// 각 연산에 대한 4개의 함수
int Add(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }

int main() {
    int a, c;
    char o;

    if (!(cin >> a >> o >> c)) return 0;

    if (o == '+') {
        cout << a << " + " << c << " = " << Add(a, c);
    } 
    else if (o == '-') {
        cout << a << " - " << c << " = " << Sub(a, c);
    } 
    else if (o == '*') {
        cout << a << " * " << c << " = " << Mul(a, c);
    } 
    else if (o == '/') {
        cout << a << " / " << c << " = " << Div(a, c);
    } 
    else {
        cout << "False";
    }

    return 0;
}
