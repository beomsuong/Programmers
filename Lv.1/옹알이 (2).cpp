#include <string>
#include <vector>
#include<iostream>
using namespace std;
int solution(vector<string> babbling) {
	int answer = 0;
	for (auto i : babbling) {
		int before = -1;
		while (true) {
			if (i.size() == 0) {
				answer++;
				break;
			}
			if (i.size() >= 3) {
				if (i[0] == 'a' && i[1] == 'y' && i[2] == 'a'&&before!=0) {
					before = 0;
					i.erase(i.begin());
					i.erase(i.begin());
					i.erase(i.begin());
					continue;
				}
			}
			if (i.size() >= 3) {
				if (i[0] == 'w' && i[1] == 'o' && i[2] == 'o'&& before != 1) {
					i.erase(i.begin());
					i.erase(i.begin());
					i.erase(i.begin());
					before= 1;
					continue;
				}
			}
			if (i.size() >= 2) {
				if (i[0] == 'y' && i[1] == 'e'&& before != 2)
				{
					before = 2;
					i.erase(i.begin());
					i.erase(i.begin());
					continue;
				}
			}
			if (i.size() >= 2) {
				if (i[0] == 'm' && i[1] == 'a'&& before != 3)
				{
					before = 3;
					i.erase(i.begin());
					i.erase(i.begin());
					continue;
				}
			}
			cout << i << endl;
			break;

		}
	}
	return answer;
}
