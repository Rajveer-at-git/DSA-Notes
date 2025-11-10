class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> Palin;
        long int a = x;
        if(x<0)
            return false;
        while(a!=0)
        {
            Palin.push_back(a%10);
            a = a/10;
        }

        long int finalnum = 0;
        for(int i=0;i<Palin.size();i++)
        {
            finalnum = finalnum*10 + Palin[i];
        }
        
        if(finalnum == x)
            return true;
        else 
            return false;
    }
};

// Done