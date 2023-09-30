#include<bits/stdc++.h>
using namespace std;
void factors(int n , int i);
int main()
{
	int n;
	cout<<"ENTER ANY NUMBER : ";
	cin>>n;
	cout<<"THE FACTORS ARE : "<<endl;
	factors(n , 1);
	return 0;
}
void factors(int n , int i)
{
	if(n <= 0){
		return;
	}
	else{
		if(n % i == 0){
			cout<<i<<"  ";
			n /= i;
			++i;
			factors(n,i);
		}
		else{
			++i;
			factors(n,i);
		}
	}
}
