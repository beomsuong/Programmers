#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for (auto i : order) {
        if (i == "cafelatte")
            answer += 5000;
        else if(i == "hotcafelatte")
            answer += 5000;
            else if(i == "icecafelatte")
            answer += 5000;
          else if(i == "cafelattehot")
            answer += 5000;
            else if(i == "cafelatteice")
            answer += 5000;
            else 
            answer += 4500;
    }
    return answer;
}
