class Solution {
  public:
    // Function should return all the ancestor of the target node
   Node* f(struct Node *root, int k,vector<int>& ans){
        if(root==NULL || root->data == k)   return root;
        Node* l=f(root->left,k,ans);
        Node* r=f(root->right,k,ans);
        if(l || r){
            ans.push_back(root->data);
            return root;
        }
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ans;
        Node* m=f(root,target,ans);
        return ans;
    }
};
