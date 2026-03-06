#include <iostream>

using namespace std;

int n;
void yesNo(int n){
    int original_n = n; // 원래 숫자를 저장해둡니다.
    int sum = 0;
    
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    
    // 원래 숫자가 짝수이고, 자리수의 합이 5의 배수인지 확인
    if(original_n % 2 == 0 && sum % 5 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main() {
    cin >> n;

    // Please write your code here.
    yesNo(n);
    return 0;
}