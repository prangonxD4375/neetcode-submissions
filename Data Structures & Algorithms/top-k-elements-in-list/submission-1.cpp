class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(auto num:nums){
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto buck : freq) {
            bucket[buck.second].push_back(buck.first);
        }

        vector<int> result;
        for (int i = bucket.size() - 1; i >= 0 && k > 0; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                k--;
                if (k == 0) break;
            }
        }

        return result;
        
    }
};
