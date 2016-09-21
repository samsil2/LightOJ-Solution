#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main() {
   int t,n,r;
   cin>>t;
   for(int i=0;i<t;i++)
   {
    cin>>n;
    r=n/2;
    cout<<r<<" "<<n-r<<endl;
   }
    return 0;
}
