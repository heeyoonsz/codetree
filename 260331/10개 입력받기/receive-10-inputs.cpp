#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int cnt = 0;
    int sum = 0;
    int arr[10];

    for(int i=0;i<10;i++) {
        cin >> arr[i];
        sum += arr[i];
        if(arr[i]==0){
            cnt--;
            cout << fixed << setprecision(1) << sum << " " << double(sum/i);
            break;
        }
    }





    return 0;
}