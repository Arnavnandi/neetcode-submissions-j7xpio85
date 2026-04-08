class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int ans=-nums[i];
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[j]+nums[k]==ans){
                    temp.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k-1]){
                        k--;
                    }
                    j++,k--;
                }
                else if(nums[j]+nums[k]>ans){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return temp;
    }
};
