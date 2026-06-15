#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    int arr[100];
    int count = 0 ;

    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==m){
            count++;
        }
    }

    cout << count;

    return 0;
}