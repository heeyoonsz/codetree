#include <iostream>

using namespace std;

// 최대공약수(GCD)를 구하는 함수
int getGCD(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 최소공배수(LCM)를 구하여 출력하는 함수
void findLCM(int n, int m) {
    // 공식을 이용하면 반복문 없이 바로 계산 가능합니다.
    long long lcm = (long long)n * m / getGCD(n, m);
    cout << lcm;
}

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;
    
    findLCM(n, m);

    return 0;
}
