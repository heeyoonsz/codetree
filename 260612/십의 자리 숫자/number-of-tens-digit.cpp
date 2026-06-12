#include <iostream>
using namespace std;

int main() {
    // 굳이 배열 안 써도 되는 문제 ..
    int n;
    int count_arr[10]={0,}; // count배열은 초기화 해주기 ..

    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        
        // 1. 입력받은 숫자의 십의 자리 숫자가 뭔지 계산
        int tens = n/10;

        // 2. count배열에 추가
        count_arr[tens]++;
    }

    // 작은 수부터 출력
    for(int i=1;i<=9;i++){
        cout << i << " - " << count_arr[i] << "\n";
    }


    return 0;
}