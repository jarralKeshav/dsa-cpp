    #include <bits/stdc++.h>
    using namespace std;
     
    void solve()
    {
         string s;
         cin >> s;
         if(s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
         {
            puts("YES");
         }
         else 
          puts("NO");
    }





    int main()
    {
        std::ios::sync_with_stdio(false);
        std::cin.tie(0);
     
        int t;
        cin >> t;
        while(t--)
        {
        solve();
        }
        return 0;
    }