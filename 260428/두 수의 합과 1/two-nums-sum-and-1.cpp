#include <iostream>
#include <string>
using namespace std;

int main() {

    int count = 0;

    int num1, num2;
    string str1, str2;

    cin >> num1 >> num2;

    int sum = num1 + num2;
    string num_str = to_string(sum);

    for(int i=0;i<num_str.length();i++){
        if(num_str[i]=='1'){
            count++;
        }
    }

    cout << count;

    return 0;
}