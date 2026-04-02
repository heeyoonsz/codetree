#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str1, str2;
    string result = "";
    getline(cin, str1);
    getline(cin, str2);

    for(int i=0;i<str1.length();i++){
        if(str1[i]!=' '){
            result+=str1[i];
        }
    }
    for(int i=0;i<str2.length();i++){
        if(str2[i]!=' '){
            result+=str2[i];
        }
    }

    cout << result;

    return 0;
}