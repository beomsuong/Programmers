#include <string>
#include <vector>
#include <queue>
using namespace std;

struct a {
    int x, y, d;
};

int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

int solution(vector<string> maps) {
    int answer = -1;
    queue<a> q;
    int x1, y1;
    bool visited[100][100] = { false };

    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[0].size(); j++) {
            if (maps[i][j] == 'S') {
                x1 = i;
                y1 = j;
            }
        }
    }
    q.push({ x1, y1, 0 });
    visited[x1][y1] = true;
    int now = 0;
    while (!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int d = q.front().d;
        q.pop();

        if (maps[x][y] == 'L') {
            now = d;
            x1 = x;
            y1 = y;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < maps.size() && ny >= 0 && ny < maps[0].size() && !visited[nx][ny] && maps[nx][ny] != 'X') {
                visited[nx][ny] = true;
                q.push({ nx, ny, d + 1 });
            }
        }
    }
    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[0].size(); j++) {
            visited[i][j] = false;
             
        }
    }
    while (!q.empty())
    {
         q.pop();
    }
    q.push({ x1, y1, now });
    if(now!=0)
    while (!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int d = q.front().d;
        q.pop();

        if (maps[x][y] == 'E') {
            return d;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < maps.size() && ny >= 0 && ny < maps[0].size() && !visited[nx][ny] && maps[nx][ny] != 'X') {
                visited[nx][ny] = true;
                q.push({ nx, ny, d + 1 });
            }
        }
    }
    return answer;
}
