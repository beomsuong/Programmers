#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for (int i = 0; i < parts.size();i++) {
        for (int q = parts[i][0]; q <= parts[i][1];q++)
            answer += my_strings[i][q];
    }
    return answer;
}
