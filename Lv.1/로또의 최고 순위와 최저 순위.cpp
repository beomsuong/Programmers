#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
	vector<int> answer;
	int now = 0;
	for (auto i : lottos)
	{
		for (auto q : win_nums)
		{
			if (i != 0 && i == q){
				now++;
				break;
			}
			if (i == 0){
				now++;
				break;
			}
		}
	}
	if(now==6)
	answer.push_back(1);
	else if(now==5)
	answer.push_back(2);
	else if(now==4)
	answer.push_back(3);
	else if(now==3)
	answer.push_back(4);
	else if(now==2)
	answer.push_back(5);
	else if(now<2)
	answer.push_back(6);
	now=0;
	for (auto i : lottos)
	{
		for (auto q : win_nums)
		{
			if (i != 0 && i == q){
				now++;
				break;
			}
		}
	}
	if(now==6)
	answer.push_back(1);
	else if(now==5)
	answer.push_back(2);
	else if(now==4)
	answer.push_back(3);
	else if(now==3)
	answer.push_back(4);
	else if(now==2)
	answer.push_back(5);
	else if(now<2)
	answer.push_back(6);
	return answer;
}
