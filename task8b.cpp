#include <iostream>
using namespace std;
main()
{
int res,num,a,b,c,d;
cout<<"Enter four digit number: ";
cin>>num;
a=num%10;
b=(num/10)%10;
c=(num/100)%10;
d=(num/1000)%10;
res=a+b+c+d;
cout<<res;
}