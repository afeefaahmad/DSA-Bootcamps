/*Write a C program to print all negative elements in an array. */
#include <iostream>
using namespace std;
#define MAX_SIZE 100   

 
int main()
{
    int arr[MAX_SIZE]; 
    int i, num;
 
    cout<<"Enter size of the array: ";
    cin>>num;
 

    cout<<"Enter elements in array: ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
    cout<<"All negative elements in array are:";
    for(i=0; i<num; i++)
    {
        //Printing negative elements
        if(arr[i] < 0)
            cout<<arr[i];
    }
 
    return 0;
}
 
