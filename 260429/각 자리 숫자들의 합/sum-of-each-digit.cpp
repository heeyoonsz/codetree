#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    
    int n;

    cin >> n;

    string num =to_string(n);
    int sum = 0;

    for(int i=0;i<num.length();i++){
        int digit = num[i]-'0';
        sum += digit;
    }

    cout << sum;



    return 0;
}