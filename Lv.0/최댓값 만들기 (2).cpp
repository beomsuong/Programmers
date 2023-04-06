#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    
    return max(numbers[numbers.size()-2]* numbers[numbers.size() - 1],numbers[0]*numbers[1]);
}
