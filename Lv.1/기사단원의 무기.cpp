#include <string>
#include <vector>

using namespace std;
int arr[100001] = { 0, };
int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; i++) {
        for (int j = i; j <= number; j = j + i) {
            arr[j]++;
        }
         if (arr[i] > limit) {
            answer += power;
        }
        else {
            answer += arr[i];
        }
    }
    return answer;
}
