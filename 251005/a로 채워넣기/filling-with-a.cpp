#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    
    str[1]='a';
    int length = str.length();
    str[length-2]='a';
    
    cout << str << endl;


    return 0;
}