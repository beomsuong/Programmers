#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    bool a = false;
    for (int i = 0; i < n_str.size(); i++) {
        if (a || n_str[i] != '0')
        {
            answer += n_str[i];
            a = true;
        }
     
    }
        return answer;
}
