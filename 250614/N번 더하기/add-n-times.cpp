#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,n;
    int sum=0;
    cin >> a >> n;
    sum = a+n;
    for(int i=0;i<n;i++) {
        cout << sum << endl;
        sum+=n;  
    }
    return 0;
}