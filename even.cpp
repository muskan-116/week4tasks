#include <iostream>
using namespace std;
void iseven(int number);
main()
{
int number;
while(true)
{
cout<<"enter number ";
cin>>number;
iseven(number);
}
}
void iseven(int number)
{
if(number%2==0)
{
cout<<"even number "<<endl;
}
if(number%2==1)
{
cout<<"odd number "<<endl;
}
}

