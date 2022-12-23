#include <iostream>
using namespace std;
main()
{
string name;
float a;
float b;
float c;
float d;
float e;
float r;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter subject 1 marks: ";
cin>>a;
cout<<"Enter subject 2 marks: ";
cin>>b;
cout<<"Enter subject 3 marks: ";
cin>>c;
cout<<"Enter subject 4 marks: ";
cin>>d;
cout<<"Enter subject 5 marks: ";
cin>>e;
r=((a+b+c+d+e)/500)*100;
cout<<"Your percentage is "<<r<<"%.";
}