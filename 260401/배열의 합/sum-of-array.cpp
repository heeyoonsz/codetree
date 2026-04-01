#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum = 0;
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
            cout << sum << "\n";
            sum = 0;
    }
    return 0;
}