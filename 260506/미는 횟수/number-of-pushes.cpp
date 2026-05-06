#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str1, str2;
    int num = 0;
    
    cin >> str1 >> str2;
    
    int len = str1.length();
    bool found = false;

    // aabb -> baab
/*
    string shifted_str1 = str1[0] + str1.substr(1);
    if(shifted_str1 == )
*/
    
    // 1. 최대 문자열 길이만큼 민다
    for(int i = 1; i<=len; i++) {
        // 우측으로 한 칸 밀기 : 마지막 글자 + 0번부터 뒤에서 두번째까지     
        str1 = str1.back() + str1.substr(0, len -1);

        // 2. 밀린 결과가 str2와 같은지 확인
        if(str1 == str2) {
            cout << i << endl; //맞으면 현재 횟수 출력
            found = true;
            break;
        }
    }

    // 다 돌았는데 못찾았으면 -1
    if(!found){
        cout << -1 << endl;
    }


    return 0;
}