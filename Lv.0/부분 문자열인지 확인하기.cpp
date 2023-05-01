#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string pat) {
    int answer = 0;
    string s;

    for (int i = 0; i < pat.size(); i++)
        s += my_string[i];
    if (s == pat)
        return 1;
    for (int i = pat.size(); i < my_string.size(); i++) {
        s.erase(s.begin());
        s += my_string[i];
        if (s == pat)
            return 1;
    }
    return 0;
}
