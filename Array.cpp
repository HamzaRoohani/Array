#include<iostream>
using namespace std;
int main()
{
	int numbers[5]={1,3,5,7,9};
	cout<<"The numbers are: ";
	for(int n:numbers)
	{
		cout<<n<<" ";
	}
	return 0;
}