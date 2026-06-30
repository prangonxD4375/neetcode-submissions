class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> set(nums.begin(), nums.end());
        int best=0;

        for (auto num : set){
            if(set.count(num-1)){
                continue;
            }
            else{
                int cur = num;
                int len=1;
                while(set.count(cur+1)){
                    cur++;
                    len++;
                }
            best = max(best, len);
                
            }
        }

    return best;
        
    }
};
