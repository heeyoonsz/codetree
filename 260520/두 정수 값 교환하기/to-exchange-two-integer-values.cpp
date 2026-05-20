#include <iostream>
using namespace std;


void swap(int &n, int &m) {
    int temp = n;
    n = m;
    m = temp;
    
}

int main() {
    // Please write your code here.
    
    int n,m;
    cin >> n >> m;
    swap(n,m);
    cout << n << " " << m;
    
    
    return 0;
}