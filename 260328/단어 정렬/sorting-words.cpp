#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// string str;
string str[100];
int num;
int main() {
    cin >> num;

    // Please write your code here.
    for(int i=0;i<num;i++){
        cin >> str[i];
    }
        sort(str,str+num);
    for(int i=0;i<num;i++){
        cout << str[i] << "\n";
    }
    return 0;
}