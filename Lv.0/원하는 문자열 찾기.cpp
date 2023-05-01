#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string s;
    for (int i = 0; i < myString.size(); i++) {
        myString[i] = tolower(myString[i]);
    }
    for (int i = 0; i < pat.size(); i++) {
        pat[i] = tolower(pat[i]);
    }
    for (int i = 0; i < pat.size(); i++)
        s += myString[i];
    if (s == pat)
        return 1;
    for (int i = pat.size(); i < myString.size(); i++) {
        s.erase(s.begin());
        s += myString[i];
        if (s == pat)
            return 1;
    }
    return 0;;
}
