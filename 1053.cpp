#include <iostream>
#include <algorithm>
#include<cmath>
#include<bitset>
 
using namespace std;
 
int main() {
   int t,a[3];
   cin>>t;
   for(int i=1;i<=t;i++)
   {
    cin >> a[0] >> a[1] >> a[2];
        cout << "Case "<< i <<": ";
        sort(a,a+3);
        if(a[2]*a[2]== a[0]*a[0]+a[1]*a[1])cout << "yes"<< endl;
        else cout << "no"<< endl;
   
}
  return 0;
}
