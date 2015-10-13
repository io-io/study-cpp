#include <iostream>

int main()
{
	char input;
	bool br=false;
	std::cout << "type one letter from a..d" << std::endl;
	do {
		std::cin >> input;
		switch(input){
			case 'a' : std::cout << "you typed a";
			br = true;
			break;
			case 'b' : std::cout << "you typed b";
			br = true;
			break;
			case 'c' : std::cout << "you typed c";
			br = true;
			break;
			case 'd' : std::cout << "you typed d";
			br = true;
			break;
		}
	}
	while (br == false);
	return 0;
}