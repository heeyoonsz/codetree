#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;
    string str;
    char target;
    getline(cin, str);
    cin >> target;
    for(int i=0;i<str.length();i++){
        if(str[i]==target){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}