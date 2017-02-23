#include<iostream>
using namespace std;

int fun(int k)
{
 return (k / 3) * 2 + (k % 3 == 2 ? 1 : 0); //3(x+1)
}
int main()
{
 int t,a,b,i  ;
 
 cin >> t;
 for(int i=1;i<=t;i++)
 {
  cin >> a >> b;
  cout << "Case " << i<< ": "  << (fun(b) - fun(a - 1)) << endl;
 }
 return 0;
}

