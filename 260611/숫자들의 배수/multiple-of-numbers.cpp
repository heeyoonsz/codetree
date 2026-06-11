#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[100];
    int count = 0;

    cin >> n;
    for(int i=0;i<10;i++){
         arr[i] = n * (i+1);
    }
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
        if(arr[i]%5==0){
            count++;
        }
        if(count==2){
            break;
        }
    }
    return 0;
}