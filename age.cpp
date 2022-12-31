#include <iostream>
using namespace std;
void iseligible(int age);
main()
{
int age;
while(true)
{
cout<<"enter age : ";
cin>>age<<endl;
iseligible(age);
}
}
void iseligible(int age)
{
if(age>18)
{
cout<<"you are eligible to vote : ";
}
if(age<18)
{
cout<<"you are not eligible to vote : ";
}
}

