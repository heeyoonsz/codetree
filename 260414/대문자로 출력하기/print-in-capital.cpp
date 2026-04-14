#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    cin >> input;

    for(int i=0;i<input.length();i++){
        if((input[i]>='a'&&input[i]<='z')||(input[i]>='A'&&input[i]<='Z')){
        cout << (char)(toupper(input[i]));
        }
    }


    return 0;
}