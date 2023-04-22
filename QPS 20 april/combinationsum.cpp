class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void solve (int target,int i,vector<int>& candidates){
        
        if(target==0) {
            ans.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        
        for(int j = i;j<candidates.size();j++){
            temp.push_back(candidates[j]);
            solve(target-candidates[j],j,candidates);
            temp.pop_back();
        }
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        temp = vector<int>();
        solve(target,0,candidates);    
        return ans;
    }
    
    
};