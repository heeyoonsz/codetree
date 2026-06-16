#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    int count = 0;
    int min_val = INT_MAX;

    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(min_val>arr[i]){
            min_val = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==min_val){
            count++;
        }
    }

    cout << min_val << " " << count <<endl;

    return 0;
}