#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    string a = s.substr(0,3); //010
    string x = s.substr(4,4); //1234
    string y = s.substr(9,4); //5678
    
    cout << a << "-" << y << "-" << x;

    return 0;
}