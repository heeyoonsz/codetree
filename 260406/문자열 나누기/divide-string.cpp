#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    // int arr[10];

    string all_nums=""; // 모든 숫자 이어붙일 바구니
    string temp;

    for(int i=0;i<n;i++){
        cin >> temp;
        all_nums+=temp;
    }

    // 합쳐진 문자열 5개씩 끊어서 출력
    for(int i=0;i<all_nums.length();i++){
        cout << all_nums[i];
        // 5번째 글자마다 줄바꿈
        // i+1이 5의 배수일때 줄바꿈하면 된다
        if((i+1)%5==0){
            cout << "\n";
        }
    }

    
    return 0;
}