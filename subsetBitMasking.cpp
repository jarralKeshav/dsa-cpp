#include <bits/stdc++.h>
using namespace std;
class Solution{

public:
    vector<vector<int>> subsets(vector<int>nums){

        int len = nums.size();
        int Mask = 1<<len;
        vector<vector<int>> powerSet(Mask);
        for(int m=0;m<Mask;m++){
            for(int i=0;i<len;i++){
                if(m &(1<<i)){
                    powerSet[m].push_back(nums[i]);
                }
            }
        }
        return powerSet;

    }
};

int main()

{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    // vector<int> v = {3,2,1};
    vector<int> nums = {1, 2, 3};
    Solution sol;
    vector<vector<int>> powerset = sol.subsets(nums);

    for (vector<int> subset : powerset) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;




    return 0;
}