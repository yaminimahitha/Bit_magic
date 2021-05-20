#include<iostream>
using namespace std;
int main()
{
	int num;
	int count=0;
	cout<<"Enter the number";
	cin>>num;
	while(num)
	{
		if(num&1==1)
		{
			count++;
		}
		num=num>>1;
	}
	cout<<count;
	return 0;
}
