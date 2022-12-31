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
int purchaseAmount1,purchaseAmount2,output1,output2;
if(day=="sunday")
{
purchaseAmount1=(0.1*amount);
cout<<"purchaseAmount "<<purchaseAmount1<<endl;
output1=amount-purchaseAmount1;
cout<<"output "<<output1<<endl;
}
if(day!="sunday")
{
purchaseAmount2=(0.05*amount);
cout<<"purchaseAmount "<<purchaseAmount2<<endl;
output2=amount-purchaseAmount2;
cout<<"output "<<output2<<endl;
}
}