#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string fruits[5]={"apple","banana","grape","blueberry","orange"};
    // string result[5];
    char target;
    int cnt = 0;
    cin >> target;
    for(int i=0;i<5;i++){
        if(fruits[i][2]==target || fruits[i][3]==target){
            // result += fruits[i];
            cout << fruits[i] << "\n";
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}