#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    string str;
    cin>>str;
    // int result =0;
    int count=1, ans=1;
    ll len = str.length();
    // cout<<len<<endl;
    for(int i=0;i<len;i++){
        if(str[i]==str[i-1]){
            count++;
        }
        if(str[i]!=str[i-1])count=1;
        ans = max(ans,count);
        

    }
    cout<<ans<<endl;

    
}