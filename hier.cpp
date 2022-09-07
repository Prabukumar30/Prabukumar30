#include<iostream>
#include<conio.h>
using namespace std;

class parts
{
	int a;
	public:
		 a=123;
		 b="outer parts";
		
		void bd()
		{
			cout<<"Parts are: "<<a<<b;
		}
		
};
class iparts: public parts
{
	public:
	char i[100],j[100],k[100];
	
	i="Engine";
	j="motor";
	k="suspense";
	
	void ip()
	{
	cout<<a<<endl<<i<<j<<k;
}
	 
};
class oparts: public parts
{
	public:
		char x[20],y[20],z[20];
		x="doors";
		y="seats";
		z="steering";
		
		void op()
		{
			cout<<a<<endl<<x<<y<<z;
		}
};

int main()
{
	parts s;
	iparts q;
	oparts w;
	s.bd();
	q.ip();
	w.op();
	return 0;
	
}


