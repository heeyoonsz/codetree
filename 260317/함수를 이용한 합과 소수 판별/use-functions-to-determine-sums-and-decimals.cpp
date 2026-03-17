#include <iostream>

using namespace std;

int a, b;

bool checkNumber(int n){
    // prime ?
    if (n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }

    // digit check
    int temp = n;
    int sum = 0;
    while (temp>0) {
        sum += temp%10;
        temp /=10;
    }

    return (sum%2==0);
}


int main() {
    cin >> a >> b;

    // Please write your code here.
    int count = 0;
    
    for(int i=a;i<=b;i++){
        if(checkNumber(i)){
            count++;
        }
    }

    cout << count;

    return 0;
}