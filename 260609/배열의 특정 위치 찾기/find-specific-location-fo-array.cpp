#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }    

    int even_sum = 0;
    int triple_sum = 0;
    int triple_count = 0;

    for(int i =0; i<10; i++){
        int order = i + 1;

        //짝수인지 확인
        if (order %2 ==0) {
            even_sum += arr[i];
        }

        //3의 배수인지 확인
        if (order % 3 == 0) {
            triple_sum += arr[i];
            triple_count++;
        }
    }

    // 3의 배수 번재 평균 계산 (소수점 계산을 위해 double로 형변환)
    double triple_avg = (double)triple_sum / triple_count;

    // 출력 형식 설정
    cout << fixed ;
    cout.precision(1);

    // 결과 출력
    cout << even_sum << " " << triple_avg << "\n";
    return 0;
}