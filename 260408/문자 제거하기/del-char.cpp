#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    // int n;

    cin >> str ;
    
    int input;

    // for(int i=0;i<n;i++){
    while(str.length()>1) {
        cin >> input;
        if(input>=str.length()){
            str.erase(str.length()-1,1);
        }
        else {
            str.erase(input,1);
        }
        cout << str << "\n";
    }

    return 0;
}