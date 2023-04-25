#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a = 1, b = 1;
    int z = 0, x = 0;
    for (auto i : num_list) {
        if (i % 2)
        {
            z = z * 10 + i;

        }
        else
            x = x * 10 + i;
    }
    return z+x;
}
