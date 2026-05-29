#include <iostream>
using namespace std;

void recurv(int n){
    if(n==0){
        return;
    }
    cout << "HelloWorld" << "\n";

    recurv(n-1);

}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    recurv(n);
    return 0;
}