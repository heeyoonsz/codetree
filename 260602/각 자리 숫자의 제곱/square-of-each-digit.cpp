#include <iostream>
using namespace std;

 int get_digit_sum(int n){
    
    // 더 이상 쪼갤 숫자 없으면 0 반환
    if(n == 0){
        return 0;
    }

    int last_digit = n % 10 ; //맨 뒷자리 숫자

    // 현재 뒷자리 제곱 + 남은 앞자리들 재귀호출
    return (last_digit * last_digit) + get_digit_sum(n/10);
 }

int main() {

    int n;
    cin >> n;
    cout << get_digit_sum(n) << endl;    
    return 0;
}