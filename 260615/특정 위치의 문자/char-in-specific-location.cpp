#include <iostream>
using namespace std;

int main() {
    
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char input;
    
    int found_index = -1;
    
    cin >> input;
    
    for(int i=0;i<6;i++){
        if(input == word[i]){
            found_index = i;
            break;
        }
    }

    //반복문 다 끝난 후 결과 판단해서 한 번만 출력
    if(found_index != -1) {
        cout << found_index;
    } else {
        cout << "None";
    }
    return 0;
}