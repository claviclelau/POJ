#include <iostream>
using namespace std;

int plank[20000];
int main()
{
	sol_1();
	return 1;
}

//O(n^2). Time limit exceeded.
void sol_1()
{
	int i_num;
	cin>>i_num;
	for (int i = 0; i<i_num; ++i)
		cin>>plank[i];
	long long int answer = 0;
	
	while (i_num>1)
	{
		int min1 = 0, min2 = 1;
		if (plank[min1]>plank[min2])
			swap(min1, min2);
		for (int i = 2; i<i_num; ++i)
		{
			if (plank[i]<plank[min1])
			{
				min2 = min1;
				min1 = i;
			}
			else if (plank[i]<plank[min2])
				min2 = i;
			
			int cost = plank[min1] + plank[min2];
			answer += cost;
			if (min1 == --i_num) swap(min1, min2);
			plank[min1] = cost;
			plank[min2] = plank[i_num];
		}
	}
	cout<<answer<<endl;
}