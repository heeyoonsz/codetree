#include <iostream>
using namespace std;

int main() {

    int arr[10];
    int max_val = -1e9;
    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]>max_val){
            max_val = arr[i];
        }
    }
    cout << max_val;


    return 0;
}