#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

const double pi=acos(-1);

int main()
{
	double R,n,a,b;
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>R>>n;
	    a=sin(pi/n) ;
        b=(a*R)/(1+a) ;
		cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<b<<endl;  
	}
	
	return 0;
}
