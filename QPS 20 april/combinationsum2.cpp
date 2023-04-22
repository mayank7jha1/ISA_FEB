class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    
    void solve(vector<int>&candidates , int target, int ind){
        
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0)return ;
        
        for(int i = ind;i<candidates.size();i++){
            
            if(i>ind and candidates[i]==candidates[i-1])continue;
            
            temp.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i+1);
            temp.pop_back();
        }
        
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ans.clear();
        temp.clear();
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0);
        return ans;
    }
};