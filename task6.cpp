#include <iostream>
using namespace std;
main()
{
float a,b,c,d,e,costp,costsq;
cout<<"Enter the bag size in pounds: ";
cin>>a;
cout<<"Enter the cost of the bag: ";
cin>>b;
cout<<"Area coverd by each bag in square feet: ";
cin>>c;
costp=b/a;
costsq=b/c;
cout<<"Cost of fertilizer per pound: "<<costp<<endl;
cout<<"Cost of fertilizing per square feet: "<<costsq;
}