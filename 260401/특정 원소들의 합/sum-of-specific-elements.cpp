#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    /*
    00
    10 11
    20 21 22
    30 31 32 33    
    */

    int arr[4][4];
    int cnt = 0;

    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i<4;i++){
        for(int j = 0;j<i+1;j++){
            cnt += arr[i][j];
        }
    }

    cout << cnt;

    return 0;
}