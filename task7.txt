#include <iostream>
using namespace std;
main()
{
string name;
float atp,ctp,ats,cts,r,per,total,rest,cm;
cout<<"Enter movie name: ";
cin>>name;
cout<<"Enter adult ticket price: ";
cin>>atp;
cout<<"Enter child ticket price: ";
cin>>ctp;
cout<<"Enter number of adult tickets sold: ";
cin>>ats;
cout<<"Enter number of child tickets sold: ";
cin>>cts;
cout<<"Enter percentage to donate: ";
cin>>per;
total=(atp*ats)+(ctp*cts);
cm=(per/100)*total;
rest=total-cm;
cout<<"Total amount generated: "<<total<<"."<<endl;
cout<<"Amount after donation: "<<rest<<".";
}