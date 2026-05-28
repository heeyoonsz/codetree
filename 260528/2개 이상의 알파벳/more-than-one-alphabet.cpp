#include <iostream>
#include <string>
using namespace std;

bool hasTwoOrMore(const string &s){
    char first_char = s[0]; // 기준이 되는 첫 번째 글자

    for(int i=1; i<s.length();i++){
        // 첫 번째 글자와 다른 글자가 단 하나라도 있다? = 서로 다른 알파벳의 수가 2개 이상
        if(s[i] != first_char) {
            return true;
        }
    }
    return false;
}

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    if(hasTwoOrMore(str)){
        cout << "Yes" <<"\n";
    }
    else {
        cout << "No" << "\n";
    }

    return 0;
}