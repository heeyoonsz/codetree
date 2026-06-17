#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //최솟값을 구할때는 초기값을 아주 큰 값으로 설정 ..
    int min_diff = 99999999;

    for(int i=0;i<n-1;i++){
        // if(arr[i+1]-arr[i]>0){
        //     min_diff = arr[i+1] - arr[i];
        // }
        // 오른쪽 큰 수 - 왼쪽 작은 수
        int diff = arr[i+1] - arr[i];

        //여태까지 구한 차이보다 '더 작은 차이'를 발견하면 상자 교체
        if(diff<min_diff){
            min_diff = diff;
            
        }

    }

    cout << min_diff;

    return 0;
}