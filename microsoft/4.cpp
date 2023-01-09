//ROTATE FUNCTION
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum0=0,tot=0;
        for(int i=0;i<nums.size();i++){
            sum0+=i*nums[i];
            tot+=nums[i];
        }
        int n=nums.size();
        int sum=sum0;
        int ans=INT_MIN;
        for(int i=n-1;i>=0;i--){
            sum=sum0+tot-n*nums[i];
            ans=max(sum,ans);
            sum0=sum;
        }
        return ans;
    }
};

