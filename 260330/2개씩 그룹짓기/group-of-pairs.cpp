#include <iostream>
#include <algorithm>
using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.

    sort(nums, nums+2*N);

    int maxVal = 0;

    // 0번째와 2n-1, 1번째와 2n-2 ... 
    for(int i=0;i<N;i++) {
        int currentSum = nums[i] + nums[2*N-1-i];

        if(currentSum>maxVal) {
            maxVal = currentSum;
        }
    }
        
    cout << maxVal;

    return 0;
}
