#include <iostream>
using namespace std;

int main()
{
int salary , bonus,yos; //yos=year of service
cout << "enter salary" <<endl;
cin >> salary;
cout <<"enter yos" <<endl;
cin >> yos;
if(yos>5)
    cout <<"total bonus is:"<<salary*0.05<<endl;
else
    cout<<"no bonus:" <<endl;
return 0;
}