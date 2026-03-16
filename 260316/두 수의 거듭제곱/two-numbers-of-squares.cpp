#include <iostream>
// #include <math.h>

using namespace std;

int a, b;

int pow(int a, int b){
    int rsl=1;
    for(int i=1;i<=b;i++){
        rsl *= a;
    }
    return rsl;
}


int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << pow(a,b);
    
    return 0;
}