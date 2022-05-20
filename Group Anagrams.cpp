class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
       unordered_map<string,vector<string>> m;
        for(auto &i:s){
            string a=i;
            sort(i.begin(),i.end());
            m[i].push_back(a);
        }
        vector<vector<string>> ans;
        for(auto &i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
