#include <iostream>
using namespace std;

void isEven(int x[], int size){
    for(int i=0;i<size;i++){
        if(x[i]%2==0){
            x[i]=x[i]/2;
        }
    }


}

int main() {
    // Please write your code here.
    int n;
    int arr[50];
    cin >> n;
    
    // 입력 먼저 받기
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // 함수 호출
    isEven(arr, n);

    //변경된 결과 출력
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    
    
    return 0;
}