#include <iostream>
using namespace std;
void totalamount(string day, int amount);
main()
{
string day;
int amount;
while(true)
{
cout<<"enter day"<<endl;
cin>>day;
cout<<"enter amount"<<endl;
cin>>amount;
totalamount(day,amount);
}
}
void totalamount(string day, int amount)
{
int purchaseAmount,output;
if(day=="sunday")
{
purchaseAmount=(0.1*amount);
cout<<"purchaseAmount "<<purchaseAmount<<endl;
output=amount-purchaseAmount;
cout<<"output "<<output<<endl;
}
if(day!="sunday")
{
cout<<"amount : "<<amount<<endl;
}
}