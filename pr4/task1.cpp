#include <iostream>
using namespace std;
int main()
{
	char inp[40]={0};
	int size=0;
	bool res=true;
	cin >> inp;
	for (int i = 0; i < 40; ++i)
	{
		if (inp[i]!=0x00)
		{
			size++;
		}
	}
	if (res)
	{
		cout << "Palindrome";
	}
	else cout << "Not palindrome";
	cin.get();
	cin.get();
	return 0;
}