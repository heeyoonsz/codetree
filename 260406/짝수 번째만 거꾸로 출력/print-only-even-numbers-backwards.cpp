#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    string result;
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(i%2!=0){
            result+=str[i];
        }
    }

    for(int i=result.length()-1;i>=0;i--){
        cout << result[i];
    }
    return 0;
}