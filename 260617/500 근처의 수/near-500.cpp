#include <iostream>
using namespace std;

int main() {
    
    int arr[10];
    int max_500 = 0;
    int min_500 = 1001;

    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    for(int i=0;i<10;i++){
        if(arr[i]<500){
        if(arr[i]>max_500){
            max_500 = arr[i];
        }
        }
        if(arr[i]>500){
        if(arr[i]<min_500){
            min_500 = arr[i];
        }
        }
    }
    
    cout << max_500 << " " << min_500 ;


    return 0;
}