#include <iostream>

int main()
{
	char input[50];
	int i=0;
	do{
		std::cin >> input;
		++i;
	}
	while (strcmp(input, "done"));
	std::cout << "words: " << i-1;
	return 0;
}