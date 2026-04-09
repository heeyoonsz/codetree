#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    cin >> str;

    string result="";

    result = str.substr(1) + str.substr(0,1);
    cout << result;

    return 0;
}