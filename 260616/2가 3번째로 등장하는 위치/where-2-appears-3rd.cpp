#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    int count = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==2){
            count++;
            if(count==3){
                cout << i+1;
            }
        }
    }

    return 0;
}