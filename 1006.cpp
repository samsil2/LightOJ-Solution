#include <iostream>
#include <cstring>
#include <cstdio>
 
#define maxn 10003
using namespace std;
long long fn[maxn];
int main() {
 // your code goes here
 int n, cases, caseno=0, i;
 cin >> cases;
 while (cases--) {
  fn[6]=0;
  for (i=0;i<6;i++) {
   scanf("%lld",&fn[i]); fn[i]=fn[i]%10000007;
   fn[6]=(fn[6]+fn[i])%10000007;
  }
  cin >> n;
  for (i=7;i<=n;i++) {
   fn[i]=(fn[i-6]+fn[i-5]+fn[i-4]+fn[i-3]+fn[i-2]+fn[i-1])%10000007;
  }
  cout<<"Case "<<++caseno<<": "<<fn[n]<<endl;
 }
 return 0;
}
