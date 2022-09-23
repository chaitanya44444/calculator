#include <iostream>
using namespace std;

double sum(double,double);
double subtract(double,double);
double multiply(double,double);
double divide(double,double);
double a,b,c;

int main()
{
char op;
cout<<"-: CALCULATOR PROGRAM :-"<<endl;
cout<<"\nEnter a number: ";
cin>>a;
cout<<"\nEnter another number: ";
cin>>b;

cout<<"\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*";
cout<<"\nPress A for ADDITION";
cout<<"\nPress S for SUBTRACTION";
cout<<"\nPress M for MULTIPLICATION";
cout<<"\nPress D for DIVISION";
cout<<"\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
cout<<"\nCHOOSE YOUR OPTION: ";
cin>>op;

/*

if (op=='A' || op=='a')
{
cout<<"ADDITION ["<<a<<" + "<<b<<"] = "<<sum(double,double);
else if (op=='M' || op=='m')
cout<<"MULTIPLICATION ["<<a<<" x "<<b<<"] = "<<multiply(double,double);
else if (op=='S' || op=='s')
cout<<"SUBTRACTION ["<<a<<" - "<<b<<"] = "<<subtract(double,double);
else if (op=='D' || op=='d')
cout<<"DIVISION ["<<a<<" / "<<b<<"] = "<<divide(double,double);
else
cout<<"\nINVALID CHOICE! PLEASE TRY AGAIN...";
}

*/

switch(op)
{
case 'a':
case 'A':
cout<<"ADDITION ["<<a<<" + "<<b<<"] = "<<sum(a,b);
break;	

case 's':
case 'S':
cout<<"SUBTRACTION ["<<a<<" - "<<b<<"] = "<<subtract(a,b);
break;	

case 'm':
case 'M':
cout<<"MULTIPLICATION ["<<a<<" x "<<b<<"] = "<<multiply(a,b);
break;	

case 'd':
case 'D':
cout<<"DIVISION ["<<a<<" / "<<b<<"] = "<<divide(a,b);
break;	

default:
cout<<"\nINVALID CHOICE! PLEASE TRY AGAIN...";
break;	
}

return 0;	
}

double sum(double x, double y)
{
double z;
z=x+y;
return z;
}

double subtract(double x, double y)
{
double z;
z=x-y;
return z;
}

double multiply(double x, double y)
{
double z;
z=x*y;
return z;
}

double divide(double x, double y)
{
double z;
z=x/y;
return z;
}
