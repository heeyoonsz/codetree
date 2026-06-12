#include <iostream>
using namespace std;

int main() {

    int dice[10];
    int count[7]={0,};

    for(int i=0;i<10;i++){
        cin >> dice[i];
    }
    
    for(int i=0;i<10;i++){
        count[dice[i]]++;
    }

    for(int i=1;i<7;i++){
        cout <<i << " - " << count[i] << "\n";
    }

    return 0;
}