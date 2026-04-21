#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    cin >> input;
    
    for(int i=0;i<input.length();i++){
        if(input[i]>='A'&& input[i]<='Z'){
            input[i] = tolower(input[i]);
        }
        else if(input[i]>='a'&& input[i]<='z'){
            input[i] = toupper(input[i]);
        }
    }

    cout << input;

    return 0;
}