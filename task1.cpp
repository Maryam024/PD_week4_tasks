#include<iostream>
using namespace std;
void IsEqual(int n1, int n2);

main()
{
  int n1,n2;
  cout<<"Enter the first number: ";
  cin>>n1;
  cout<<"Enter the second number: ";
  cin>>n2;

  IsEqual(n1,n2);
}

  
void IsEqual(int n1,int n2)
{
  if(n1==n2)
   {
      cout<<"true"; 
   }else
  {   cout<<"false";
}
}
