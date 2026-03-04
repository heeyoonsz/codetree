#include <iostream>

using namespace std;

int n, m;

void FindGcd(int n, int m){
    int gcd = 0;
    for(int i=1; i<=min(n,m);i++){
        if(n%i==0 && m%i==0)
        gcd=i;
    }
    cout << gcd;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
 
    FindGcd(n,m);


    return 0;
}