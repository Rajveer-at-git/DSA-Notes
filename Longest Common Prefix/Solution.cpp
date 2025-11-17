class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        bool flag = true;
        int leng = 0;
        if(strs[0].substr(0,leng) != strs[1].substr(0,leng))
            return str;
        while (1) {
            for (int i = 1; i < strs.size(); i++) {
                if (str != strs[i].substr(0, leng))
                {
                    flag = false;
                    break;
                }
            }
            str = strs[0].substr(0, leng);
            
            if(!flag)
                break;
            else
                leng++;
        }
        return str;
    }
};