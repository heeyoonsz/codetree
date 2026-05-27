#include <iostream>
#include <string>

using namespace std;

// 함수 안에서 문자열 수정하지 못하도록 const 붙임
bool isPalindrome(const string &s){
    int n = s.length();
    for(int i = 0; i < n/2; i++){
        if(s[i]!=s[n-1-i]){
            return false;
        }
    }
    return true;
}

int main() {
    // Please write your code here.

    string str;
    cin >> str;

    if(isPalindrome(str)){
        cout << "Yes" <<"\n";
    }
    else{
        cout << "No" <<"\n";
    }

    return 0;
}