#include <iostream>

using namespace std;

int a, b, c;
void getMin(int a, int b, int c){
    int min_val=a;
    if (b<min_val) min_val = b;
    if (c<min_val) min_val = c;
    cout << min_val;
}
int main() {
    cin >> a >> b >> c;
    getMin(a,b,c);
    // Please write your code here.

    return 0;
}