#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string now;
    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] == ' ') {
            answer.push_back(now);
            now.clear();
            i++;
        }
        now += my_string[i];
    }
    answer.push_back(now);
        return answer;
}
