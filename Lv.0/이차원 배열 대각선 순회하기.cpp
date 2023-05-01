#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int q = 0; q < board[0].size(); q++) {
            if (i+q<=k)
                answer += board[i][q];
        }
    }
    return answer;
}
