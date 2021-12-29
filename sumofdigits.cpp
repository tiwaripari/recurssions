#include<iostream>
using namespace std;
int sum_dig(int n)
{
    if(n==0)
    {
        return 0;
    }
    int remaining=n/10;
    int ld=n%10;
    cout<<remaining<<" "<<ld<<endl;
    int sum=sum_dig(remaining)+(ld);
    return sum;
}
int main()
{
   int n;
    cin>>n;
    cout<<sum_dig(n);
    return 0;
}
