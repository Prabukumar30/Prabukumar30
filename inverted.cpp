#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i, j, r;
	
	cout<<"Enter the number rows: ";
	cin>>r;
	
	for(i=r;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}