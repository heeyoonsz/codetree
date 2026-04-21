#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string input;

    cin >> input;

    int sum = 0;

    for(int i=0;i<input.length();i++){
        if(isdigit(input[i])){
            sum += input[i] -'0';
        }
    }

    cout << sum;


    return 0;
}