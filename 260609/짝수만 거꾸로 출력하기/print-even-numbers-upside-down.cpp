#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    int arr[100];
    int even_arr[100];

    cin >> N;

    for(int i = 0; i<N; i++) {
        cin >> arr[i];
    }

    // 배열의 맨 뒤(N-1)번재부터 시작해서 맨 앞(0번째)까지 거꾸로 검사한다
    for(int i = N-1; i >= 0; i--) {
        // 거꾸로 가면서 짝수 만날 때 바로 출력
        if(arr[i] % 2 ==0) {
            cout << arr[i] << " ";
        }
    }




    return 0;
}