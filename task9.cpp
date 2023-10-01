#include<iostream>
using namespace std;

void tpChecker(int people,int tp);
main()
{
 int people,tp;
 cout<<"Number of people in the household: ";
 cin>>people;
 cout<<"Number of rolls of TP: ";
 cin>>tp;

 tpChecker(people,tp);

}
void tpChecker(int people,int tp)
{
 int r1,r2,days;
 r1=people*57;
 r2=tp*500;
 days=r2/r1;

if(days<14){
  cout<<"Your TP will only last "<<days<<" days, buy more!";
   }else  {
  cout<<"Your TP will last "<<days<<" days, no need to panic!";}


}