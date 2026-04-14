#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char alpha;
    cin >> alpha;

    if(alpha=='a'){
        cout << 'z';
    }else {
    cout << (char)(((int)alpha)-1);
    }
    return 0;
}