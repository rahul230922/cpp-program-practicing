#include<iostream>
using namespace std;

void EvenOdd(int num)//parameter
{
    if(num%2==0)
    cout<<"Even";
    else
    cout<<"odd" ;
    

}
int main ()
{
    int num;
    cin>>num;
    EvenOdd(num);//argument
    return 0;

}
