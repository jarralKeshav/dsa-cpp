#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
int solve(int row,int col)
{
    int value=0;
 if(row>=col){
    if(row%2==0){
        value = pow(row-1,2)+(row-col)+row;
    }
    else{
        value = pow(row-1,2)+col;
    }
 }
 else{
    
 }
 return value;
 
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int t;
    cin >> t;   
    while(t--)
    {
 
    int a,b;
    cin>>a>>b;
    cout<<solve(a,b)<<"\n";
 
    }
    return 0;
}