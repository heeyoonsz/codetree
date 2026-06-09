#include <iostream>
using namespace std;

int main() {
    int N  = 0;
    int pass_count = 0;

    cin >> N;

    for(int i = 0;i<N;i++){
        int sum = 0; // 각 학생의 합계를 구할 변수(새 학생마다 0으로 초기화)

        for(int j = 0;j<4;j++){
            int score;
            cin >> score;
            sum += score; // 점수 누적
        }

        // 평균이 60점 이상인지 확인 (합계가 240점 이상이면 평균 60점 이상)
        // 굳이 나누기를 하지 않고 sum>=240 조건으로 판별하면 정수 나눗셈 소수점
        if(sum>=240){
            cout << "pass" << "\n";
            pass_count++; // 통과한 학생 수 1 증가
        }
        else {
            cout << "fail" << "\n";
        }
    }

    cout << pass_count << "\n";

    return 0;
}