#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class format {
    public:
        string account;
        int account_level;

    // constructor : 값 받아서 내부 변수에 넣어줌
    // 기본값 설정해두면 인자 없이 생성할 때 편하다 ..
    format(string account = "", int account_level = 0){
        this->account = account;
        this->account_level = account_level;
    }
};

int main() {
    //입력받기
    cin >> user2_id >> user2_level;

    // 첫번째 객체("codetree", 10으로 초기화)
    format acc1 = format("codetree", 10);
    // 두번째 객체 (입력받은 값으로 초기화)
    format acc2 = format(user2_id, user2_level);

    cout << "user " << acc1.account << " lv " << acc1.account_level << endl;
    cout << "user " << acc2.account << " lv " << acc2.account_level << endl;

    return 0;
}