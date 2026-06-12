#include <iostream>
using namespace std;

int main() {
    // int arr[100];
    int n;
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        if(n%2!=0){
            cout << n+3<<" ";
        }
        else {
            cout << n/2<<" ";
        }
    }



    return 0;
}