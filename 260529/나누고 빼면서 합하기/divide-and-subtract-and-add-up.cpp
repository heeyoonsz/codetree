#include <iostream>

using namespace std;

int n, m;
int A[100];

int getSum(){
    int total_sum = 0; // 누적해서 더해줄 변수

    // M이 1이 될 때까지 계속 반복
    while(m>=1){
        // 현재 M번째 원소(인덱스는 M-1) 더하기
        total_sum += A[m-1];

        // M이 1이 되었으면 더 이상 다음 단계로 안 가도 됨
        if (m==1) {
            break;
        }
        
        // 문제 조건에 맞춰 M 변형
        if (m%2==0) {
            m/=2; //짝수면 2로 나누기
        } else {
            m-=1; //홀수면 1 빼기
        }
    }
    return total_sum; // 최종 합계 반환
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    cout << getSum() << "\n";
    return 0;
}