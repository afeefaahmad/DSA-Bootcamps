#include <iostream>
using namespace std;

int main()
{
int length ,width;
cout << "enter length" <<endl;
cin >>length;
cout << "enter width" <<endl;
cin>>width;

if (length==width)
    cout << "It is a square"<<endl;
else
    cout<<"not a square";
return 0;
}