#include <iostream>

int main()
{
	int a,sum=0;
	do {
		std::cin >> a;
		sum+=a;
		std::cout << "sum is: " << sum << std::endl;
	}
	while (a!=0);
	return 0;
}