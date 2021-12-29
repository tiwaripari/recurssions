#include<iostream>
using namespace std;
void pattern(int n)
{
    if(n==0)
    {
        return;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    pattern(n-1);
    if(n==1)
    {
        return;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;


}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}

