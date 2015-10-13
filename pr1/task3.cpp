#include <iostream>

int main()
{
	int input, curYear=2015, res=0;
	std::cin >> input;
	for (int i = input; i <= curYear; ++i)
	{
		if (((i%4==0) && (i%100!=0)) || ((i%4==0) && (i%400==0)))
		{
			res++;
		}
	}
	std::cout << "res is: " << res;
	return 0;
}