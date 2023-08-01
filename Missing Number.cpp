#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<n;i++)
    {
        int k;
        cin>>k;
        sum+=k;
    }
    long long sumActual=0;
    sumActual = (n*(n+1))/2;
    cout<<sumActual-sum<<endl;
    return 0;

}