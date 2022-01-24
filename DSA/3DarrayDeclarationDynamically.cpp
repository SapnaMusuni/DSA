#include<iostream>
using namespace std;
int main()
{
	int rows, col;
	cout<<"Number of rows: "<<endl;
	cin>>rows;
	cout<<"Number of columns: "<<endl;
	cin>>col;
	
	int ***ptr = new int **[rows];
	for(int i=0;i<rows;i++)
	{
		ptr[i]=new int*[col];
		for(int j=0;j<col;j++)
		{
			ptr[i][j]= new int * [col];
		}
	}
}
