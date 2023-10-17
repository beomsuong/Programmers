#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    int answer = 0;
    int before = 0;
    string a;
    stringstream s1(s);
    while (s1 >> a) {
        if (a == "Z")
            answer -= before;
        else if (a[0] == '-') {
            a.erase(a.begin() + 0);
                answer -= stoi(a);
            before=-stoi(a);
        }
        else {
            answer += stoi(a);
             before=stoi(a);
        }
    }
    return answer;
}
