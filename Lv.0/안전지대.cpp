#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int N = board.size();

    for (int i = 0; i < N; i++) {
        for (int q = 0; q < N; q++) {
            if (board[i][q] == 1) {
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        int ni = i + x;
                        int nq = q + y;
                        if (ni >= 0 && ni < N && nq >= 0 && nq < N && board[ni][nq] == 0) {
                            board[ni][nq] = 3;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int q = 0; q < N; q++) {
            if (board[i][q] == 0) {
                answer++;
            }
        }
    }

    return answer;
}
