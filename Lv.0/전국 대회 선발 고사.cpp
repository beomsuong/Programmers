#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int, int>> rank1;
    int a, b,c;
    for (int i = 0; i < rank.size(); i++) {
        if (attendance[i]) {
            rank1.push_back({rank[i], i});
        }
    }
    sort(rank1.begin(), rank1.end());
    a = rank1[0].second;
    b = rank1[1].second;
    c = rank1[2].second;

    return a * 10000 + b * 100 + c;
}
