#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    if(!(number%n))
        if(!(number%m))
           return 1;
    return 0;
}
