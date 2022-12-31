#include <iostream>
using namespace std;
void greaternumber(int firstNumber,int secondNumber);
main()
{
int numb1,numb2;
while(true)
{
cout<<"enter first number"<<endl;
cin>>numb1;
cout<<"enter second number"<<endl;
cin>>numb2;
greaternumber(numb1,numb2);
}
}
void greaternumber(int firstNumber,int secondNumber)
{
if(firstNumber>secondNumber)
{
cout<<"number 1 isgreater "<<endl;
}
if(secondNumber>firstNumber)
{
cout<<"number 2 isgreater "<<endl;
}
}