class Solution {
public:
    
    int findMaxFreq(unordered_map<char, int> &map){
        int max=INT_MIN;
        for(auto i: map){
            if(i.second > max)
                max = i.second;
        }
        
        return max;
    }
    
    int characterReplacement(string s, int k) {
        int i=0, j=0;
        int ans = 0;
        unordered_map<char, int> umap;
        while(j<s.length() && i<=j){
            umap[s[j]]++;
            int mostFreq = findMaxFreq(umap);
            // cout << mostFreq;
            if(((j-i+1)-mostFreq) <= k ){
                ans = max(ans,(j-i+1));
                j++;
            }
            else{
                umap[s[i]]--;
                i++;
                umap[s[j]]--;
            }
            cout << ans;
        }
        return ans;
    }
};
