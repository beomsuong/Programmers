#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> a;
    for (int i = 0;i < moves.size();i++) {
        for (int q = 0;q < board.size();q++) {
            if (board[q][moves[i] - 1] != 0) {
                
                if (!a.empty()&&a.back() == board[q][moves[i] - 1]) {
                    a.erase(a.begin() + a.size() - 1);
                    answer += 2;
                }

                else
                    a.push_back(board[q][moves[i] - 1]);

                board[q][moves[i] - 1] = 0;
                break;
            }
        }
        
        
    }
   

    return answer;
}
