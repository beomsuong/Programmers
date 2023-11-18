#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> a;
    vector<string> b;
    string now;
    for (int i = 0; i < n; i++) {
        for (int q = 0; q < n; q++) {
            now += to_string(arr1[i] % 2);
            arr1[i] /= 2;
        }
        for (int q = now.size(); q < n; q++) {
            now.insert(now.begin(), '0');
        }
        reverse(now.begin(), now.end());
        a.push_back(now);
        now.clear();
        for (int q = 0; q < n; q++) {
            now += to_string(arr2[i] % 2);
            arr2[i] /= 2;
        }
        for (int q = now.size(); q < n; q++) {
            now.insert(now.begin(), '0');
        }
        reverse(now.begin(), now.end());
        b.push_back(now);
    }
    for (int i = 0; i < n; i++) {
        for (int q = 0; q < n; q++) {
            if (a[i][q] == '1' || b[i][q] == '1') {
                now += '#';
            }
            else
                now += ' ';
        }
        answer.push_back(now);
    }
    return answer;
}
