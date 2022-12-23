#include <iostream>
using namespace std;
main()
{
float vpk,fpk,ef,ev,rs;
int tkv,tkf;
cout<<"Enter vegetable price per kilogram: ";
cin>>vpk;
cout<<"Enter fruit price per kilogram: ";
cin>>fpk;
cout<<"Total kilograms of vegetables: ";
cin>>tkv;
cout<<"Total kilograms of fruits: ";
cin>>tkf;
ev=(vpk*tkv);
ef=(fpk*tkf);
rs=(ev+ef)/1.94;
cout<<"Earning of all fruits and vegetable is "<<rs<<" rupees.";
}