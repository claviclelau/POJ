#include <iostream>
using namespace std;

int main()
{
	int i_case;
	cin>>i_case;
	for (int i = 0; i < i_case; ++i)
	{
		int i_length;
		cin>>i_length;
		int i_ants;
		cin>>i_ants;
		int i_shortest = 0, i_longest = 0;
		for (int j = 0; j < i_ants; ++j)
		{
			int i_position;
			cin>>i_position;
			i_position = i_position < (i_length - i_position) ? i_position : (i_length - i_position);
			i_shortest = i_shortest < i_position ? i_position : i_shortest;
			i_position = i_length - i_position;
			i_longest = i_longest > i_position ? i_longest : i_position;
		}
		cout<<i_shortest<<' '<<i_longest<<endl;
	}
}