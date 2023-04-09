#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if (direction == "right") {
        
        int save = numbers[numbers.size() - 1];
        for (int i = numbers.size()-1;i >=1;i--) {
            numbers[i] = numbers[i - 1];
        }
        numbers[0] = save;
    }
    else
    {
        int save = numbers[0];
        for (int i = 0;i < numbers.size();i++) {
            numbers[i] = numbers[i + 1];
        }
        numbers[numbers.size()-1] = save;
    }
    return numbers;
}
