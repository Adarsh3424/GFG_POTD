class Solution
{
    public:
    
    /*You are required to complete below function */
    void solve(Node *root, int x, int y, vector<int> &v) 
    {
        if(!root)
            return;
            
        v.push_back(root->data);
        if(x < root->data and y < root->data)
            solve(root->left, x, y, v);
            
        if(x > root->data and y > root->data)
            solve(root->right, x, y, v);
    }

    int kthCommonAncestor(Node *root, int k, int x, int y)
    { 
        vector<int> ancs;
        solve(root, x, y, ancs);
        
        reverse(ancs.begin(), ancs.end());
        return k > ancs.size() ? -1 : ancs[k - 1];
    }
};
