#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
int solve(int one,int two)
{
 vector<vector<int>> vect
 {
    {1,2,9,10,15},
    {4,3,8,11,24},
    {5,6,7,12,23},
    {16,15,14,13,22},
    {17,18,19,20,21}
 };


 int value = vect[one-1][two-1];
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