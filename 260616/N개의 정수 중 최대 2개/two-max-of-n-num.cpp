#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    int temp;
    cin >> n;
    
    // 배열에 값 입력받기
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){ // 마지막 행 직전까지 돌리기
        for(int j=i;j<n;j++){ //i의 다음 방부터 끝까지 비교하기
            // 내림차순(큰 수가 앞)이니까 .. 앞 i가 뒤 j보다 작으면 자리를 바꾼다
            if(arr[i]<arr[j]){
                temp=arr[i]; // 1. 임시값에 앞의 값 넣기
                arr[i] = arr[j] ; //앞의 방에 더 큰 뒤의 값 넣어주기
                arr[j] = temp; // 뒤의 방에 대피시켰던 작은 값 넣어주기
            }
        }
    }

    cout << arr[0] << " " << arr[1] << "\n";

    return 0;
}