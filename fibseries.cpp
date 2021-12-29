#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    int term=fib(n-2)+fib(n-1);
    return term;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
