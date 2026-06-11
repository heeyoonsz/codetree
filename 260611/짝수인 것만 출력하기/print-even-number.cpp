#include <iostream>
using namespace std;

int main() {
    
    int arr[100];
    int new_arr[100];
    
    int n;
    int count = 0 ;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if (arr[i]%2==0) {
            new_arr[count] = arr[i];
            count++;
        }
    }
    
    for(int i=0;i<count;i++){
        cout << new_arr[i] << " ";
    }
    
    return 0;
}