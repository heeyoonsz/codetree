#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count_arr[10] = {0,};
    
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        count_arr[arr[i]]++;
    }
    for(int i=1;i<10;i++){
        cout << count_arr[i]<<"\n";
    }

    return 0;

}