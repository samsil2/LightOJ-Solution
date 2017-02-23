#include <iostream>
using namespace std;

 
  
    int fun(int n)
    {
            int c  = 0;
            while(n>0)
            {

                    if(n%2==1) c ++;
                    n/=2;
            }
          return c;

    }

    int main()
    {
            int t,i;
            unsigned long long n;
           cin>>t;
           
            for(i =1; i<=t;i++)
            {
                    cin>>n;
                    if(fun(n)%2==0)
                    cout<<"Case "<<i<<": even\n";
                    else
                    cout<<"Case "<<i<<": odd"<<endl;

            }
    return 0;


    }


