#include <iostream>
using namespace std;

int main() {

    int a,b;
    
    cin >>a>>b;

    // B 최댓값이 10이라서 나머지는 무조건 0~9까지 나옴
    
    int count[10]={0,};

    while(a>1){
        int rem = a % b; //나머지 구하기
        count[rem]++;
        a/=b; // A에 몫 저장
    }

    int total_sum = 0;

    //나머지 나올 수 있는 범위인 0부터 B-1까지 돌면서 제곱합 계산
    for(int i=0;i<b;i++){
        int cnt = count[i];
        total_sum += cnt * cnt; // 횟수의 제곱을 더하기
    }

    cout << total_sum << endl;

    return 0;
}