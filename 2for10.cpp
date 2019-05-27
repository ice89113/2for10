#include<iostream>
using namespace std;
int main()
{
	int n,t=0,i=1;
	cin>>n;
	while(n)
	{
		t=(n%10)*i+t;
		n=n/10;
		i=i*2;
	}
	cout<<t;
 } 
