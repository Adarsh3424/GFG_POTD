class Solution {
  public:
    void solve(Node* root , int n , int &ans){
        if(root== nullptr) return ;
        
        if(root->key <= n){
            ans = max(root->key , ans);
        }
        
        if(n >= root->key) solve(root->right , n , ans);
        else solve(root->left , n , ans);
        
        
    }
  public:
    int findMaxForN(Node* root, int n) {
        // code here
        int ans = -1;
        
        solve(root, n , ans);
        return ans;
        
    }
};
