#include <iostream>
using namespace std;

int getSum(int n){
    if(n==1){
        return 1;
    }
    // int sum = 0;
    // sum += n;
    return  n + getSum(n-1);

}

int main() {
    // Please write your code here.
    
    int n;
    cin >> n;
    cout << getSum(n) << endl;

    return 0;
}