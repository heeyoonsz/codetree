#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    char c;
    int n = -1;

    cin >> str >> c;
    bool found = false;

    for(int i=0;i<str.length();i++){
        if(str[i]==c){
            // 위치 저장
            n  = i;
            // found = true;
            break; // 첫번째 위치만 알면 돼서 탈출
        }
    }

    if(n!=-1) { // 위치가 바뀌었으면 찾은거
        cout << n;
    } else {
        cout << "No"; // 끝까지 못찾았으면 No
    }
    
    return 0;
}