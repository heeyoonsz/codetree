#include <iostream>
#include <string>

using namespace std;

class Agent007 {
    public:
        string secret_code;
        char meeting_point;
        int meeting_time;

        // Constructor
        Agent007(string code, char point, int t) {
            secret_code = code;
            meeting_point = point;
            meeting_time = t;
        }
};


int main() {

    string sc;
    char mp;
    int mt;

    if(!(cin >> sc >> mp >> mt)) return 0;

    Agent007 agent = Agent007(sc, mp, mt);

    cout << "secret code : " << agent.secret_code << "\n" << "meeting point : " << agent.meeting_point << "\n" << "time : " << agent.meeting_time;


    return 0;
}