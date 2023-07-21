#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int x=1;
    int n;
    cin>>n;
    int m=10;
    for(int i=2;i<=n;i++)
    {
        x=(x*i)%m;
        cout<<"x inside: "<<x<<"\n";
    }
    cout<<x<<"\n";
    return 0;
}