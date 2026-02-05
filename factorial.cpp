#include<iostream>
using namespace std;
long fact(int n)
{
	long result=1;
	for(int i=1;i<=n;++i)
	result=result*i;
return result;
}
int main()
{
	int n,r,ncr;
	cout<<"enter the values of n and r(positive integers):";
	cin>>n>>r;
	if((n>=r) && (r>=0))
{
	ncr=fact(n)/(fact(r)*fact(n-r));
	cout<<"nCr="<<ncr;
}
else
{
cout<<"n and r must be non-positive integer and n>r";
}
return 0;
}
