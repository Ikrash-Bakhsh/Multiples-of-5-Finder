#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"MULTIPLES OF 5(1-50)"<<endl;
	
	for(i=1;i<=50;i++)
	{
		if(i%5==0)
		{
			cout<<i<<"\n";
		}
	}
	
	
	return 0;
}
