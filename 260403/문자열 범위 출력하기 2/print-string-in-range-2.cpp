#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string str;
    
    cin >> str;
    cin >> n;

    for(int i=str.length()-1;i>str.length()-n-1;i--){
        // n = 11, str.length() = 13
      //F u n L e e b r o s C o d e
    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13
        //11 10 9 8 7 6 5 4 3 2 1 0
    
        cout << str[i];
    
    
    }

    return 0;
}