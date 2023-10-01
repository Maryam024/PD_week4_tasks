#include<iostream>
using namespace std;

void airlineCompany(string a,int b);
main()
{   
 string a;
 cout<<"Enter the country's name: ";
 cin>>a;
 float b;
 cout<<"Enter the ticket price in dollars: $";
 cin>>b;

  
 
 airlineCompany(a,b);
}
void airlineCompany(string a,int b)
{

  float Pak,Ire,India,Eng,Canada;
 Pak=b-(b*0.05);
 Ire=b-(b*0.1);
 India=b-(b*0.2);
 Eng=b-(b*0.3);
 Canada=b-(b*0.45);

 if(a=="Pakistan"){
  cout<<"Final ticket price after discount: $"<<Pak; }
 else if(a=="Ireland"){
  cout<<"Final ticket price after discount: $"<<Ire;}
 else if(a=="India"){
  cout<<"Final ticket price after discount: $"<<India;}
  else if(a=="England"){
  cout<<"Final ticket price after discount: $"<<Eng;}
 else if(a=="Canada"){
  cout<<"Final ticket price after discount: $"<<Canada;}


}
