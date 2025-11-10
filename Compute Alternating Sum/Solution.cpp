class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        long int sum = 0;
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
            {
                if(i%2==0)
                    sum = sum + nums[i];
                else
                    sum = sum - nums[i];
            }
        return(sum);
    }
};
// Completed