#include <iostream>
using namespace std;
void displayN(string name);
main()
{
string secondname;
cout<<"enter name :";
cin>>secondname;
displayN(secondname);

string name = "ali";
displayN(name);

displayN("zara");
}
void displayN(string name)
{
cout<<"my name is : "<<name<<endl;
}
