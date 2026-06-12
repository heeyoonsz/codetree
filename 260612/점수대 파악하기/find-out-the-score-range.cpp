#include <iostream>
using namespace std;

int main() {
    
    int n;
    int score_arr[11] = {0,10,20,30,40,50,60,70,80,90,100};
    int count_arr[11] = {0,};

    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        int dif = n/10;
        count_arr[dif]++;
    }

    for(int i=10;i>=1;i--){
        cout << score_arr[i] << " - " << count_arr[i] << "\n";
    }

    return 0;
}