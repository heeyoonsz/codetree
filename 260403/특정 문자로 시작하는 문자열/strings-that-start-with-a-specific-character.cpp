#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt = 0;
    int avg = 0;
    string str[20];
    char target;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    
    cin >> target;

    double sum_length = 0;

    for(int i=0;i<n;i++){
        if(str[i][0]==target) {
            cnt++;
            sum_length += str[i].length();
        }
    }

    cout << cnt << " " << fixed << setprecision(2) << (sum_length/cnt) << "\n";

    return 0;
}