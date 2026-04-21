#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

int main() {

    string input;    
    string result="";

    cin >> input;

    for(int i=0;i<input.length();i++){
        if(isalpha(input[i])||isdigit(input[i])){
            result += tolower(input[i]);
        }
    }
    
    cout << result ;

    return 0;
}