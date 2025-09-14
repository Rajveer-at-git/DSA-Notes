class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int> sum;
        for(int i=0; i<tasks.size();i++)
            {
                int current_sum = 0;
                for (int j=0;j<tasks[i].size();j++)
                    {
                        current_sum += tasks[i][j];
                    }
                sum.push_back(current_sum);
            }
        // find the smallest no. in the array
        int smallest;
        smallest = sum[0];
        for(int k=0; k<sum.size(); k++)
            {
                if (sum[k] < smallest)
                    smallest = sum[k];
            }
        return smallest;
    }
};