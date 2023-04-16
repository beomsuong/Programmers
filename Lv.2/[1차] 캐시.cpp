#include <string>
#include <map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;


int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<pair<int, string>> m;
    for (int j = 0; j < cities.size(); j++) {
        for (int i = 0;i < cities[j].size();i++)
            cities[j][i] = tolower(cities[j][i]);
    }
    bool c = false;
    int z = cacheSize;
    for (int i = 0;i < cacheSize;i++) {
        c = false;
        if (i > cities.size() - 1)
            return answer;
        for (int q = 0;q < m.size();q++)
        {
            if (m[q].second == cities[i]) {
                c = true;
                m[q].first = 1;
                break;
            }
        }
        if (c) {
            cacheSize++;
        }
        else {
            m.push_back({ cacheSize - i,cities[i] });
            answer += 5;
        }
    }
    cacheSize = z;
    if (cacheSize != 0)
        for (int i = z;i < cities.size();i++) {
            sort(m.begin(), m.end());
            for (int q = 0;q < m.size();q++)
            {
                if (m[q].second == cities[i]) {
                    m[q].first = 1;
                }
                else
                    m[q].first += 1;

            }
            sort(m.begin(), m.end());

            if (m[0].first != 1) {
                answer += 5;
                m[m.size() - 1].first = 1;
                m[m.size() - 1].second = cities[i];
                sort(m.begin(), m.end());
            }
            else
                answer++;
        }
    else
        answer = cities.size() * 5;

    return answer;
}
