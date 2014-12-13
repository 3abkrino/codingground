#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,n,x,sum;
    sum=0;
    cin >>x>>n;
    for(i=1;i<=n;i++)
    sum=sum+pow(x,i);
    
   cout << "Hello World  " <<sum<<endl; 
   
   return 0;
}

