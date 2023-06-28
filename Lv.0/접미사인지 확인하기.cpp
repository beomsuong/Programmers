#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    string now;
    for (int i = 0;i < my_string.size();i++) {
        for (int q = i;q < my_string.size();q++) {
            now += my_string[q];
        }
        if (now == is_suffix) {
            return 1;
        }
        now.clear();
    }
    return 0;
}
