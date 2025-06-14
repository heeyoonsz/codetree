#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << (n>=80? "pass" : to_string(80-n)+" more score");
    return 0;
}