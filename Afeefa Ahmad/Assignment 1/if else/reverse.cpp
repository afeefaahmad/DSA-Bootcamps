#include<iostream>
using namespace std;
int main()
{
	int num;

	cout << "Enter a 4 digit num"<<endl;
	cin>>num;
	int ones,tens,hundred,thousand;
	thousand=num%10;
	    num=num/10;
	hundred=num%10;
	    num=num/10;
	tens=num%10;
	    num=num/10;
	ones=num%10;
	
	int upd_num=0;
	upd_num=(thousand*1000)+(hundred*100)+(tens*10)+ones;
	cout <<"The reverse is "<<upd_num<<endl;
	return 0;
}