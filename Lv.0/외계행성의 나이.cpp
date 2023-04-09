  #include <string>
  #include <vector>

  using namespace std;

  string solution(int age) {
      string answer = "";
    string s = "";
    while (age != 0)
    {
        s += char(age % 10 + 97);
        age /= 10;
    }
    for (int i = s.size() - 1;i >= 0;i--)
        answer += s[i];
        return answer;
}
