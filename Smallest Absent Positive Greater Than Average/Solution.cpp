class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        float total, n;
        total = accumulate(nums.begin(), nums.end(),0);
        n = nums.size();
        float Avg = total / n ;
        int candidate = floor(Avg) + 1;
        // check if the array only contains negative integers or not 
        if (candidate < 1)
            candidate = 1;
        set<int> present(nums.begin(), nums.end());
        while(1)
            {
                if (present.count(candidate))
                    candidate++;
                else
                {  
                    cout << candidate;
                    return candidate; 
                }
                  
            }
    }
};