#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string now = "";
    int a = 1;
    for (int i = 0;i < numbers.size();i++)
    {
        now += numbers[i];
        if (now == "zero") {
            answer *= 10;
            a *= 10;
            now.clear();
        }
            
        else if (now == "one") {
            answer *= 10;
            answer += 1;
            now.clear();
        } 
        else if (now == "two") {
            answer *= 10;
            answer += 2;
            now.clear();
        }
     
        else if (now == "three") {
            answer *= 10;
            answer += 3;
            now.clear();
        }
        else if (now == "four") {
            answer *= 10;
            answer += 4;
            now.clear();
        }
         else if (now == "five") {
            answer *= 10;
            answer += 5;
            now.clear();
        }
        else if (now == "six") {
            answer *= 10;
            answer += 6;
            now.clear();
        }
        else if (now == "seven") {
            answer *= 10;
            answer += 7;
            now.clear();
        }
        else if (now == "eight") {
            answer *= 10;
            answer += 8;
            now.clear();
        }
        else if (now == "nine") {
            answer *= 10;
            answer += 9;
            now.clear();
        }
       
    }
    return answer;
}
