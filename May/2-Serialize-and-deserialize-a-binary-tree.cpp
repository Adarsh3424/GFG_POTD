class Solution
{
   public:
    void solve(Node* root,vector<int>&ans){
        
        if(root==NULL)
        return;
        
        solve(root->left,ans);
        ans.push_back(root->data);
        solve(root->right,ans);
        
    }
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        
        vector<int>ans;
        solve(root,ans);
        return ans;
        
    }
    Node *func(vector<int>&A,int is,int ie){
        
        if(is>ie)
        return NULL;
        int  mid=(is+ie)/2;
        Node *root=new Node(A[mid]);
        
        root->left=func(A,is,mid-1);
        root->right=func(A,mid+1,ie);
        return root;
    }
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
        return func(A,0,A.size()-1);
    }

};
