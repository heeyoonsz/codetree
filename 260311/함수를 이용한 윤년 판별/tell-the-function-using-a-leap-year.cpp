#include <iostream>

using namespace std;

int y;

bool isYoon(int y) {
    if((y%4==0 && y%100!=0) || y%400==0){
        return true;
}
    return false;
}

int main() {
    cin >> y;

    // Please write your code here.
    if(isYoon(y)){
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;

    return 0;
}