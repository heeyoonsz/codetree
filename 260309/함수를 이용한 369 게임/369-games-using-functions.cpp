#include <iostream>

using namespace std;

int a, b;
void judge369(int a, int b) {
    int count = 0;
    for(int i=a;i<=b;i++){
        if (i%3 ==0) {
            count ++;
        }
        else {
            int temp = i;
            while (temp>0) {
                if(temp%10 == 3 || temp % 10 == 6 || temp%10 == 9){
                    count++;
                    break;
                }
                temp/=10; //다음 자릿수로 이동
            }
        }
    }
    cout << count;
}

int main() {
    cin >> a >> b;
    // Please write your code here.
    judge369(a,b);
    return 0;
}