#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = { 0,0 };

    for (auto i : keyinput) {
        if (i == "left") {
            if (answer[0] > -board[0]/2) {
                answer[0]--;
            }
        }
        if (i == "right") {
            if (answer[0] < board[0] / 2) {
                answer[0]++;
            }
        }
        if (i == "down") {
            if (answer[1] > -board[1] / 2) {
                answer[1]--;
            }
        }
        if (i == "up") {
            if (answer[1] < board[1] / 2) {
                answer[1]++;
            }
        }
    }
    return answer;
}
