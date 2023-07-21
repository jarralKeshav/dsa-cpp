#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
void solve(int n)
{
 if(n==1)cout<<"1"<<"\n";
 else if(n<4)cout<<"NO SOLUTION\n";
 else if(n==4) cout<<"2 4 1 3\n";
 else{
    for(int i=1;i<=n;i+=2)cout<<i<<" ";
    for(int i=2;i<=n;i+=2)cout<<i<<" ";
 }
 cout<<"\n";
 
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    cin>>n;
 
 
    solve(n);
 
    
    return 0;
}