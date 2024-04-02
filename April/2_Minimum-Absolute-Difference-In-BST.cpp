class Solution
{
   void solve(Node* root,long long int &last_node,long long int &diff){
         if (!root) return;

        solve(root->left, last_node, diff);
        diff = min(diff, abs(root->data - last_node));
        last_node = root->data;
        solve(root->right, last_node, diff);
    }
    public:
    int absolute_diff(Node *root)
    {long long int diff = INT_MAX;
        long long int last_node = INT_MIN;
        long long int temp_last_node = last_node;
       solve(root,temp_last_node,diff);
       return diff;
    }
};
