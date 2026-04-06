#include <iostream>
#include <string>

using namespace std;

string A;
string result="";

int main() {

    cin >> A;
    
    char curr = A[0];
    int cnt = 1;    

    // aaabbbbcbb 
    // 1번 인덱스부터 끝까지 확인
    for(int i=1;i<A.length();i++){
        if (A[i]==curr){
            cnt++;
        }
        else {
            // 지금까지 기록된 문자 + 숫자를 결과 문자열에 추가..
            result += curr;
            result += to_string(cnt);
            
            // 기준 문자 교체 및 카운트 초기화
            curr = A[i];
            cnt = 1;
        }
    }

    // 반복문 종료 후 마지막으로 남은 문자 덩어리 추가
    result += curr;
    result += to_string(cnt);

    // 결과 출력 ( 길이 먼저, 그다음 내용물)
    cout << result.length() << "\n" << result <<endl;

    return 0;
}
