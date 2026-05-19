#include <iostream>
#include <algorithm>
using namespace std;

// 참조자 붙여 원본 변수 직접 수정
void bigger_one(int &a, int &b){
    int minimum = min(a,b)*2;
    int maximum = max(a,b)+25;

    //원본 변수 중 어떤 값이 더 컸는지 확인
    if (a>=b){
        a = maximum;
        b = minimum;
    } else {
        a = minimum;
        b = maximum;
    }
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    bigger_one(a,b);
    cout << a << " " << b;

    return 0;
}