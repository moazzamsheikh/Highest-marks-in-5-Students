#include <iostream>
using namespace std;
int main()
{
int n;
int m;
cout<<"Enter number 1 = ";
cin>>n;
cout<<"Enter number 2 = ";
cin>>m;
if (n % m == 0 )
cout<<n<<"Multiple of"<<m<<endl;
else  if (m % n == 0 )
cout<<m<<"Multiple of"<<n<<endl;
else 
cout<<"NON"<<endl;
}