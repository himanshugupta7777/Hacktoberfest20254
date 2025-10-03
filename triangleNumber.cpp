class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]>nums[k]){
                        cnt++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return cnt;
    }
};
