#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str[101];
    int num = 0;

    while(true){
        string input;
        cin >> input;
        
        if(input=="0"){ // '0'이면 입력 종료
            break;
        }

        str[num] = input; //입력받은 문자열 배열에 저장
        num++; // 개수 세기
    }

    // 총 개수 출력
    cout << num << endl;

    // 홀수번째 출력
    for(int i =0; i<num; i++){
        if(i%2==0) {
            cout << str[i] << endl;
        }
    }

    return 0;
}