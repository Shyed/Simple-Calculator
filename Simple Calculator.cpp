#include <iostream>

using namespace std;

int main()
{
double a,b;
int c,add,sub,mul,div;

cout<<"Enter a number:";
cin>>a;

cout<<"Select operator(1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division):";
cin>> c;

cout<<"Enter second number:";
cin>>b;

if (c==1)
{
add=a+b;
cout<<"The answer is:"<<add<<endl;
}
else if (c==2)
{
sub=a-b;
cout<<"The answer is:"<<sub<<endl;
}
else if (c==3)
{
mul=a*b;
cout<<"The answer is:"<<mul<<endl;
}
else if (c==4)
{
div=a/b;
cout<<"The answer is:"<<div<<endl;
}
return 0;
}



