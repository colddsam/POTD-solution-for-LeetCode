class Solution {
public:
    int minDeletions(string s) {

        unordered_map<char, int> count;

        for(char c : s)
            count[c]++;

        unordered_set<int> freqcount;

        int ans = 0;

        for(auto& k : count)
        {
            int freq = k.second;
            while(freq>0 && freqcount.find(freq) != freqcount.end())
            {
                freq--;
                ans++;
            }
            freqcount.insert(freq);
        }
        
        return ans;
    }
};
