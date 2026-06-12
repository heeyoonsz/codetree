#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    cin >> n;

    arr[0]=1;
    arr[1]=n;
    int i;
    for(i=2;i<100;i++){
        arr[i] = arr[i-1] + arr[i-2];
        if(arr[i]>100){
            break;        
        }
    }

    for(int j=0;j<=i;j++){
            cout << arr[j] << " ";
        }


    return 0;
}