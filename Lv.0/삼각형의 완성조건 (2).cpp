#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end());
    for (int i = sides[1];i> 0;i--) {
        if (sides[0] + i > sides[1])
            answer++;
        else
            break;
    }

    for (int i = sides[1]+1;;i++) {
        if (sides[0] +sides[1] >i )
            answer++;
        else
            break;
    }
    return answer;
}
