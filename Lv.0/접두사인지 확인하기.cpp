#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string s;
    for (auto i : my_string) {
        s +=i;
        if (s == is_prefix)
            return 1;
    }
    return 0;
}
