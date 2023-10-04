#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>combinations;
    void noOfCombinations(int i,int sum,vector<int> &result,vector<int> &candidates,int n,int target){
        if(i==n || sum>target){
            if(i==n && sum==target){
                 combinations.push_back(result);
                return;
            }
            return;
        }
        
        result.push_back(candidates[i]);
        sum+=candidates[i];
        noOfCombinations(i,sum,result,candidates,n,target);
        result.pop_back();
        sum-=candidates[i];
        noOfCombinations(i+1,sum,result,candidates,n,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> result;
        int n=candidates.size();
        noOfCombinations(0,0,result,candidates,n,target);
        return combinations;
    }
};
int main(){
  int n;
  cin>>n;
  vector<int> candidates(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int target;
  cin>>target;
  Solution s;
  s.combinationSum(candidates,target);
  return 0;
}
