#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int a[200] = { 0, };
    int b = 0;
    for (int i = 0;i < my_string.size();i++) {
        if (a[int(my_string[i] - 65)] == 0) {
            a[int(my_string[i] - 65)]++;
            answer += my_string[i];
        }
        if (my_string[i] == ' ')
            if (b == 0) {
                answer += my_string[i];
                b++;
            }

    }
    return answer;
}
