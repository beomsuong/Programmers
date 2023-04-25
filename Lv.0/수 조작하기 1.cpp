#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    for (auto i : control) {
        if (i == 'w')
            n++;
        else if (i == 's')
            n--;
        else if (i == 'd')
            n+=10;
        else if (i == 'a')

            n-=10;
    }
    return n;
}
