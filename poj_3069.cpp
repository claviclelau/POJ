#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int army[1000];
	int i_radius, i_num;
	while(cin>>i_radius>>i_num)
	{
		if (i_radius == -1 || i_num == -1)
			break;
		for (int i = 0; i<i_num; ++i)
			cin>>army[i];
		sort(army, army + i_num);
		int start, i_point_num = 0;
		int i = 0;
		while (i < i_num)
		{
			start = army[i++];
			while (i < i_num && army[i] - start <= i_radius)
				++i;
			start = army[i-1];
			while (i < i_num && army[i] - start <= i_radius)
				++i;
			++i_point_num;
		}
		cout<<i_point_num<<endl;
	}
	return 1;
}