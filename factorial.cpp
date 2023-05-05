#include<iostream>
using namespace std;

void Factorial(int num)
{
    int fact=1;
    for(int i =1;i<=num;i++)
    fact = fact*i;
    
    cout<<fact;
 

}
int main()
{
    int num;
    cin>>num;
    Factorial(num);
}

C:\Users\rahul\OneDrive\Desktop\c++