#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> subset;

void solve(int arr[],int n, int index){
    if(index==n){
        int len = subset.size();
        for(int i=0;i<len;i++){
            cout<<subset[i];
        }
        cout<<"\n";
    }
    else{
        subset.push_back(arr[index]);
        solve(arr,n,index+1);
        subset.pop_back();
        solve(arr,n,index+1);

    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int arr[] = {2,3,1};
    int startIndex=0;
    solve(arr,3,startIndex);
    
    

}
