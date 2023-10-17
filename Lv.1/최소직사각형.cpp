#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    for (int i = 0;i < sizes.size();i++) {
        if (sizes[i][0] > sizes[i][1]) {
            int save = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = save;
        }
    }
    int a = 0, b = 0;
    for (int i = 0;i < sizes.size();i++) {
        if (a < sizes[i][0])
            a = sizes[i][0];
        if (b < sizes[i][1])
            b = sizes[i][1];
    }

    return a*b;
}
