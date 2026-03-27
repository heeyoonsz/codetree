#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define MAX_N 100

int n;
int nums[MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    sort(nums,nums+n);
    for(int i=0;i<n;i++){
        cout << nums[i]<<" ";
    }
    cout << "\n";
    sort(nums,nums+n,greater<int>());
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }

    return 0;
}
