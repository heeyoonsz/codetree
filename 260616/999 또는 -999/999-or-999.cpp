#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.

    // int arr[100];
    int num;
    int min = INT_MAX;
    int max = INT_MIN;

    while(true){
        cin >> num;
        if(num==999 || num==-999){
            break;
        }
        if(min > num){
            min = num;
        }
        if(max<num){
            max = num;
        }
    }

    cout << max << " " << min;

    return 0;
}