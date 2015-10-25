#include <iostream>
using namespace std;
const int k =10;
void that(int *in){
for (int i = 0; i < k-1; ++i)
{
 for (int i = 0; i < k-1; ++i)
 {
 	if (in[i]<0 )
 	{
 		int temp;
 		temp=in[i];
 		in[i]=in[i+1];
 		in[i+1]=temp;

 	}
 }
}
};
int main()

{
	int arr[k]={1,22,-3,4,5,-6,7,-8,45,-78};
	for (int i = 0; i < k; ++i)
	{
		cout << arr[i] << endl;
	}
	cout << "********" << endl;
	that (arr);
	for (int i = 0; i < k; ++i)
	{
		cout << arr[i] << endl;
	}

	return 0;
}