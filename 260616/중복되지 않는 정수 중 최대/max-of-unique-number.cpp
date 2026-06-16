#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }            

        }
    }

    int ans=-1;

    //맨 뒤(n-1)에서부터 거꾸로 0까지 내려오는 반복문
    for(int i=n-1;i>=0;i--){
        //왼쪽검사 : 내가 맨앞이거나, 내 왼쪽꺼랑 다를때
        bool left_ok = (i==0)||(arr[i]!=arr[i-1]);
        //오른쪽검사 : 내가 맨 뒤(n-1)거나, 오른쪽꺼랑 다를때
        bool right_ok = (i==n-1)||(arr[i]!=arr[i+1]);
        //둘 다 만족하면 중복 없는 유일한 숫자
        if(left_ok && right_ok){
            ans = arr[i];
            break; //거꾸로 왔으니 처음 찾은 게 무조건 최댓값
        }
    }

    cout << ans;

    return 0;
}