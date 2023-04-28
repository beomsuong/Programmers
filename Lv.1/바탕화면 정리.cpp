#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int a = 9999, b = 9999, c = 0, d = 0;
    for (int i = 0;i < wallpaper.size();i++){
        for (int q = 0;q < wallpaper[i].size();q++) {
            if (wallpaper[i][q] == '#')
            {
                a = min(a, i);
                b = min(b, q);
                c = max(c, i+1);
                d = max(d, q+1);
            }
        }

}
    return { a,b,c,d };
}
