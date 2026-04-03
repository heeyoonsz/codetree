#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string str;
    
    cin >> str >> n;

    int len = str.length();
    // n>len이면 len만큼만 출력
    int count = (n>len)? len : n;

    for(int i=0;i<count;i++){
        // n = 11, str.length() = 13
      //F u n L e e b r o s C o d e
    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13
        //11 10 9 8 7 6 5 4 3 2 1 0
    
        // cout << str[i] << "[i] : " << i << " ";
        cout << str[len-1-i];
    
    }

    return 0;
}