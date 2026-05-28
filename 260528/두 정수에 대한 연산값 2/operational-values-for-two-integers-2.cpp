#include <iostream>
using namespace std;

// 값을 직접 수정해야 하므로 const 빼고 & 붙이기
void switchNum(int &first, int &second) {
    if(first > second) {
        first *= 2;
        second += 10;
    }
    else {
        second *= 2;
        first += 10;
    }
}

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;
    
    switchNum(a,b);
    cout << a << " " << b << "\n";

    return 0;
}