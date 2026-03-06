#include <iostream>

using namespace std;

int n;
void yesNo(int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(n%2==0 && n%5 ==0)
    cout << "Yes" <<endl;
    else
    cout << "No" << endl;
}
int main() {
    cin >> n;

    // Please write your code here.
    yesNo(n);
    return 0;
}