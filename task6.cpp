#include<iostream>
using namespace std;

void longestTime(int h, int m);
main()
{
 int h,m;
 cout<<"Enter the number of hours: ";
 cin>>h;
 cout<<"Enter the number of minutes: ";
 cin>>m;
 
 longestTime(h,m);

}
void longestTime(int h, int m)
{
 int convert;
 convert=h*60;
 
 if(convert>m){
  cout<<h;}
 else if(m>convert){
  cout<<m;}
}