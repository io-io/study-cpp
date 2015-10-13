#include <iostream>

int main()
{
	int a=0,b=0,sum=0;
	std::cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
		sum+=i;
	}
	std::cout << "sum is: " << sum;
	return 0;
}