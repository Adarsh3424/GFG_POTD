class Solution {
  public:
     bool solve(Node* root, int target, int sum) {
    if (!root) return false;
    sum += root->data;
    if (!root->left && !root->right) {
        return sum == target;
    }
    return solve(root->left, target, sum) || solve(root->right, target, sum);
}
    bool hasPathSum(Node *root, int target) {
        // Your code here
       return solve(root , target ,0);
    }
};
