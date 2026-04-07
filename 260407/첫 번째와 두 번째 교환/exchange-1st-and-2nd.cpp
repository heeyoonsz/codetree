#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    cin >> input;

    char zero = input[0];
    char first = input[1];
    for(int i=0;i<input.length();i++){
        if(input[i]==zero){
            input[i]=first;
        }
        else if(input[i]==first){
            input[i]=zero;
        }
    }
    
    cout << input;

    return 0;
}