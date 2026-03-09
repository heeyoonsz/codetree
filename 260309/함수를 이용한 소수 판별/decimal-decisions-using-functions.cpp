#include <iostream>

using namespace std;

int a, b;

bool isPrime(int n) {
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if (n%i==0) return false;
    }
    return true;
}

void solve(int a, int b) {
    int sum = 0;
    for (int i=a; i<=b; i++) {
        if (isPrime(i)) {
            // i가 소수라면
            sum+=i;
        }
    }
    cout <<sum;
}

int main() {
    cin >> a >> b;
    solve(a,b);
    // Please write your code here.

    return 0;
}