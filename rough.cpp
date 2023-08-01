#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
#define nl "\n";
// void solve()
// {
 
 
// }
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
  

    int arr[]={-1,2,4,-3,5,2,-5,2};
    int best=0,sum=0;
    for(int i=0;i<8;i++){
        sum = max(arr[i],sum+=arr[i]);
        best = max(best,sum);
    }
    cout<<best<<nl;
 
    // solve();
 
    
    return 0;
}