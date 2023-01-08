//combination sum - iii
class Solution {
public:
    set<vector<int>> ans;
    void solve(vector<int>&a,int &sum,int k,int n,int i){
        
        if(sum==n && a.size()==k){
            ans.insert(a);return;
        }
        if(a.size()==k && sum!=n)return;
        if(i>9 || i<1 || sum>n || a.size()>k)return;
        //if(i<=9 && i>=1 && a.size()<k && sum>n){
        a.push_back(i);
        sum+=i;
        //int j=i+1;
        solve(a,sum,k,n,i+1);
        //i+=2;
        sum-=i;
        a.pop_back();
      //  }
        solve(a,sum,k,n,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> a;
        int sum=0,i=1;
        vector<vector<int>> v;
        solve(a,sum,k,n,i);
        for(auto i=ans.begin();i!=ans.end();i++){
            v.push_back(*i);
        }
        return v;
    }
};
//1 2 3 4 5 6 7 8 9 
