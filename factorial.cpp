#include<bits/stdc++.h>
using namespace std;
int factorial(int n);
int main()
{
	int n;
	cout<<"ENTER ANY NUMBER : " ;
	cin>>n;
	if(n < 0)
	{
		cout<<"FACTORIAL OF NEGETIVE NUMBER IS NOT POSSIBLE"<<endl;
	}
	else{
		int f = factorial(n);
		cout<<f<<endl;
	}
	return 0;
}
int factorial(int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}
}
