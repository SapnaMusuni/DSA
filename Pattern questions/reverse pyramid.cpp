#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Value of n: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1-i;j>0;j--)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}