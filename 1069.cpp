#include <iostream>
#include<cmath>
 
using namespace std;
 
int main() {
   int t,a,b,lt=4,sec=0;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
    cin>>a>>b;
   
    sec=abs(a-b)*lt+a*lt+19;
    cout<<"Case "<<i<<": "<<sec<<endl;
   
}
  return 0;
}
