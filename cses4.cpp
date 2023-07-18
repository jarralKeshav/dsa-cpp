#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long long n;
    cin>>n;
    ll count =0;
    long long arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];


    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]<0){
            long long  diff = abs(arr[i]-arr[i-1]);
            arr[i]+=abs(arr[i]-arr[i-1]);

            // cout<<"diff: "<<diff<<endl;
            count+=diff;
        }
    }
    cout<<count<<endl;

    

}