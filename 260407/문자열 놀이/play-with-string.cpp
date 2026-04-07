#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    
    string str; // s 
    int time; // q
    int num;
    string first,second;

    cin >> str >> time;
    for(int i=0;i<time;i++){

        // cin >> num >> first >> second;
        /*    
        if(num==1){
            str[first]=str[second];
            str[second]=str[first];
            cout << str << "\n";
        } 
        else if(num==2){
            
        }
        */
        cin >> num;
        
        if(num==1) {
            int a,b;
            cin >> a >> b;
        
            // ## 임시변수 temp에 잠깐 a자리 글자 대피

            char temp = str[a-1];
            str[a-1] = str[b-1]; // b자리 글자를 a로 복사
            str[b-1] = temp; // 대피시켰던 원래 a글자 b에 넣기

            cout << str << "\n";
    
        
        }
        else if(num==2) {
            char x,y; // 바꿀 문자는 char로 받기
            cin >> x >> y;

            // 문자열 전체를 돌면서 x를 찾으면 y로 교체
            for(int j=0;j<str.length();j++) {
                if(str[j] == x) {
                    str[j] = y;
                }
            }
            cout << str << "\n";
        }
    
    
    }
    
    return 0;
}