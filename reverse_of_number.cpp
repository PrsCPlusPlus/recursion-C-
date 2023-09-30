#include<bits/stdc++.h>
using namespace std;
int sum1 = 0;
int reverse(int n);
int main()
{
	cout<<"ENTER ANY NUMBER : ";
	int n;
	cin>>n;
	int rev = reverse(n);
	cout<<"REVERSE IS : ";
	cout<<rev<<endl;
	return 0;
}
int reverse(int n)
{
	int* sum = &sum1;
	if(n <= 0){
		return *sum;
	}
	else{
		int rem = n % 10;
		*sum = (*sum * 10) + rem;
		n /= 10;
		reverse(n);
	}
}
