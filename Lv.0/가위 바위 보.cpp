#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (auto i :rsp) {
        if (i == '2')
            answer += '0';
        if (i == '0')
            answer += '5';
         if (i == '5')
            answer += '2';
        
    }
    return answer;
}
