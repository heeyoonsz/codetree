#include <iostream>
using namespace std;

int main() {

    char answer;
    int temp;
    int count_arr[4]={0,}; // 진료소

    for(int i=0;i<3;i++){
        cin >> answer >> temp;

    if(answer=='Y'){
        if(temp>=37){
            count_arr[0]++;
        }
        if(temp<37){
            count_arr[2]++;
        }
    }
    if(answer=='N'){
        if(temp>=37){
            count_arr[1]++;
        }
        else{
            count_arr[3]++;
        }
    }
    }
    for(int i=0;i<4;i++){
        cout << count_arr[i] << " ";
    }
    
    if(count_arr[0]>=2){
        cout <<"E";
    }

    return 0;
}