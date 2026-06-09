#include <iostream>
using namespace std;

int main() {

    int arr[10];
    int sum=0; int count = 0;

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    //순회하면서 조건 체크
    for(int i=0;i<10;i++){
        if(arr[i]==0){
            break; //루프 종료
        }
        if(arr[i]%2==0){
            count++; //2의 배수 개수 증가
            sum += arr[i]; //2의 배수 합계 누적
        }
    }

    cout << count << " " << sum << endl;
    

    return 0;
}