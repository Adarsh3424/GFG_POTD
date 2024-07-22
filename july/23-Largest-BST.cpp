class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int ans=0;
    bool isBST(Node* root,int start,int end,int& num){
        if(root==NULL){
            return 1;
        }
        num++;
        if(!(root->data>=start&&root->data<=end)){
            return 0;
        }
        return isBST(root->left,start,root->data-1,num)&&isBST(root->right,root->data+1,end,num);
    }
    void preorder(Node* root){
        if(root==NULL){
            return ;
        }
        int start=INT_MIN;
        int end=INT_MAX;
        int num=0;
        if(isBST(root,start,end,num)){
            ans=max(ans,num);
        }
        preorder(root->left);
        preorder(root->right);
        
    }
    int largestBst(Node *root)
    {
        //Your code here
        preorder(root);
        return ans;
    }
};
