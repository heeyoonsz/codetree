#include <iostream>

using namespace std;

int N;

void num_rect(int n) {
    int cnt = 1; // 1부터 시작하는 카운터
    for(int i = 0; i < n; i++) { // n개의 줄 반복
        for(int j = 0; j < n; j++) { // 각 줄에 n개의 숫자 출력
            cout << cnt <<" ";
            cnt++;
            if(cnt==10){
                cnt=1;
            }
        }
        cout << " "<< endl;
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    num_rect(N);

    return 0;
}