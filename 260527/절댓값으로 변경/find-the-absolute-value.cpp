#include <iostream>
using namespace std;

void makeAbsolute(int x[], int size){
    for(int i = 0; i<size; i++) {
        // 만약 숫자가 0보다 작으면?
        if(x[i]<0){
            x[i] = -x[i];
        }
    }
}

int main() {
    // Please write your code here.
    int n;
    int arr[50];

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    makeAbsolute(arr,n);

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}