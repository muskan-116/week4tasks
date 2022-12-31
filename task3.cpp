#include <iostream>
using namespace std;
void add(int number1,int number2);
void multiplication(int number1,int number2);
void subtraction(int number1,int number2);
main()
{
int number1,number2;
char operation;
cout<<"enter number1 : ";
cin>>number1;
cout<<"enter number2 : ";
cin>>number2;
cout<<"enter operator : ";
cin>>operation;
if(operation=='+')
{
add(number1,number2);
}
if(operation=='*')
{
multiplication( number1,number2);
}
if(operation=='-')
{
subtraction(number1,number2);
}
}
void add(int number1,int number2)
{
int sum;
sum=number1+number2;
cout<<"sum : "<<sum<<endl;
}
void multiplication(int number1,int number2)
{
int product;
product=number1*number2;
cout<<"product : "<<product<<endl;
}
void subtraction(int number1,int number2)
{
int minus;
minus=number1-number2;
cout<<"minus : "<<minus<<endl;
}