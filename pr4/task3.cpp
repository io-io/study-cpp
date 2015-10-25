#include <iostream>
#include <string>
using namespace std;
bool IsNumber (const string &ins){
	for (int i = 0; i < ins.length(); ++i)
	{
		if (!(isdigit(ins[i])))
		{
			return false;
		}
	}
	return true;
};
int fillArr(double *in, int k){
	int i=0;
	string temp;
	for (int i = 0; i < k; ++i)
	{
		in[i]=0;
	}
	cout << "Инициализация массива" << endl;
	for (; i < k; ++i)
	{
		cout << i << ": ";
		cin >> temp;
		if (IsNumber(temp))
		{
			in[i]=stoi(temp);
		}
		else return i;
	}
	return i;
}
void showArr(double *in, int k){
	for (int i = 0; i < k; ++i)
	{
		cout << in[i] << endl;
	}
}
void reverseArr(double *in, int k){
	for (int i = 1; i < k/2; ++i)
	{
		swap(in[i], in [k-i-1]);
	}
}
int main()
{
	int k=0;
	cout << "size: ";
	cin >> k;
	cout << endl;
	double arr[k];
	fillArr(arr, k);
	showArr(arr, k);
	reverseArr(arr, k);
	showArr(arr, k);
	return 0;
}