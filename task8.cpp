#include<iostream>
using namespace std;

void pet(int holidays);
main()
{
 int holidays;
 cout<<"Holidays: ";
 cin>>holidays;

 pet(holidays);

}
void pet(int holidays)
{
 int wd,gametime,diff,extra;
 wd=365-holidays;
 gametime=wd*63+holidays*127;
 diff=30000-gametime;
 extra=gametime-30000;

 int hours1,minutes1;
 hours1=diff/60;
 minutes1=diff-(hours1*60);

 int hours2,minutes2;
 hours2=extra/60;
 minutes2=extra-(hours2*60);

if(gametime<30000){
   cout<<"tom sleeps well"<<endl<<hours1<<" hours and "<<minutes1<<" minutes"<<" less for play";
   }else {
   cout<<"Tom will run away"<<endl<<hours2<<" hours and "<<minutes2<<" minutes"<<" for play";
   }



}