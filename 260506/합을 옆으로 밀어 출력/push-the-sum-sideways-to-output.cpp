#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n, input;
    string str;
    int sum = 0;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> input;
        sum+=input;
    }

    str = to_string(sum);
    string shifted = str.substr(1) + str[0];
    cout << shifted;

    
    return 0;
}