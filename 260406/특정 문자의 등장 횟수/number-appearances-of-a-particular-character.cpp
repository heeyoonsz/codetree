#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int eb_count = 0;
    int ee_count = 0;
    string str;

    cin >> str;

    for(int i=0;i<str.length()-1;i++){
        if(str[i]=='e'&&str[i+1]=='e'){
            ee_count++;
        }
        if(str[i]=='e'&&str[i+1]=='b'){
            eb_count++;
        }
    }
    cout << ee_count <<" "<<eb_count;
    return 0;
}