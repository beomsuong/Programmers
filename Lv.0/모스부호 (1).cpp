#include <string>
#include <vector>
#include <map>
#include<sstream>
using namespace std;

string solution(string letter) {
    string answer = "";
    map<string, string> morse = { {".-", "a"},
    {"-...", "b"},
    {"-.-.", "c"},
    {"-..", "d"},
    {".", "e"},
    {"..-.", "f"},
    {"--.", "g"},
    {"....", "h"},
    {"..", "i"},
    {".---", "j"},
    {"-.-", "k"},
    {".-..", "l"},
    {"--", "m"},
    {"-.", "n"},
    {"---", "o"},
    {".--.", "p"},
    {"--.-", "q"},
    {".-.", "r"},
    {"...", "s"},
    {"-", "t"},
    {"..-", "u"},
    {"...-", "v"},
    {".--", "w"},
    {"-..-", "x"},
    {"-.--", "y"},
    {"--..", "z"} };
    stringstream s(letter);
    string s1;
    while (s >> s1) {
        answer += morse[s1];
    }
    return answer;
}
