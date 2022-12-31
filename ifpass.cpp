#include <iostream>
using namespace std;
void ifpass(int marks);
main()
{
int marks;
while(true)
{
cout<<"enter marks : ";
cin>>marks;
ifpass(marks);
}
}
void ifpass(int marks)
{
if(marks>50)
{
cout<<"you have passed the first quiz of pf"<<endl;
}
if(marks==50)
{
cout<<"your marks are 50"<<endl;
}
if(marks<50)
{
cout<<"you are failed"<<endl;
}
}



