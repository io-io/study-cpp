#include <iostream>
#include <string>

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void input(int &a, int *arr){
	std::string s;
	do {
		std::cin >> s;
		if (is_number(s))
		{
			arr[a]=stoi(s);
			a++;
		}
	}
	while((a<10) && (s!="s"));
};

void count(int mid, int a, int *arr){
	int sum=0;
	for (int i = 0; i < a; ++i)
 {
 	sum+=arr[i];
 	std::cout << arr[i] << " ";
 }
std::cout << std::endl;
mid=(float)sum/a;
};

int main()
{
	int arr[10]={0};
	int a=0;
	float mid=0;
	input(a, arr);
	count(mid, a, arr);
	std::cout << "mid: " << mid;
	return 0;
}