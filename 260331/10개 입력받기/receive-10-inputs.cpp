#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int cnt = 0;
    int sum = 0;
    int arr[10];

    for(int i=0;i<10;i++) {
        cin >> arr[i];
        
        if(arr[i]==0) break; // 바로탈출 ..
        
        sum += arr[i];
        cnt++;
    }

    cout << fixed << setprecision(1) << sum << " " << double(sum/cnt);

    return 0;
}